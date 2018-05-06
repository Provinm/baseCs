
## Mutual Import In Python

在 Python　的工程化应用中，经常会遇到相互引用的情况。一旦把握不好就容易出现报错，最近在解决代码重构的时候就遇到过此问题，得益于之前看到过的一些精妙的代码实现再加上自己的思考，最后完美且优雅的解决了这种问题。

本文章特别提到工程化，是因为该解决方案适合在工程中应用，简单的脚本使用则显得相对臃肿复杂。

以下我会逐步的从问题背景，解决思路，最终代码的顺序逐一说明。

背景代码抽象如下

File a.py

```python
from b import Bcls

class Acls(object):
    
    def __init__(self):
        
        self.bcls = Bcls()
        
A = Acls()
        
```

File b.py

```python

from a import Acls

class Bcls(object):
    def __init__(self):
    
        self.Acls = Acls()
        
```

运行文件 A 时出现报错

```python

Traceback (most recent call last):
  File "/home/zx/mutual_import/a.py", line 3, in <module>
    from b import Bcls
  File "/home/zx/mutual_import/a.py", line 4, in <module>
    from a import Acls
  File "/home/zx/mutual_import/a.py", line 3, in <module>
    from b import Bcls
ImportError: cannot import name Bcls

```

这么引用最后一定是会出问题的，Acls 在初始化的时候需要先初始化 Bcls, Bcls初始化的时候又需要先初始化 Acls。很多同学会笑，怎么有人会写这种看起来极其不合理的代码，其实在工程应用中，这真的是挺常见的。下面我会逐步的给出思考以及解决过程。

首先介绍一个设计模式，类似于单例，但我个人觉得比单例更简单直接的设计模式，它的大名叫 [Brog](https://github.com/faif/python-patterns/blob/master/creational/borg.py)。

简单来说，它可以让类下的所有实例共享属性，代码如下：


```python
class Brog(object):
    
    _shared = {}
    def __init__(self):
        self.__dict__ = self._shared
```

这个设计模式的好处在于，你可以在代码的任意地方初始化一个实例，然后向其内部注册属性或者方法，然后该类下所有的实例都会有此方法或者属性


```python
A = Brog()
B = Brog()
```


```python
# 向 A 中注册一个属性
A.attr = 1
```


```python
# 该属性会立即出现在 B中
B.attr == 1
```




    True




```python
# 向 A 中注册一个方法

def func():
    
    print("this is func")
    
A.func = func
```


```python
# 该方法同样可以在 B 中直接调用

B.func()
```

    this is func


看到这里，解决思路浮出水面了，我们要使用 Brog 设计模式构造一个中间类，来为两个文件中的类牵线搭桥，这样来解决相互引用的问题。

设计思路如下，首先在文件 B 中使用 brog 模式构建一个类，我这里称之为 Bridge


```python
# File b.py


class Bridge(object):
    
    _shared = {}
    
    def __init__(self):
        
        self.__dict__ = self._shared
        
    # 为了使代码清晰易懂，提供一个注册方法
    def register(self, alias, cls):
        # alias 是类的别名
        # cls 是类本身
        setattr(self, alias, cls)
        
    # 提供一个调用方法
    def invoke(self, alias):
        # 使用别名初始化注册好的类
        return getattr(self, alias)
        
    
```

然后修改 B 文件中的 Bcls


```python
# File b.py

class Bcls(object):
    
    def __init__(self):
        # 初始化 bridge
        self.bridge = Bridge()
        
    def invoke_acls(self):
        # 使用别名调用　Acls
        # 注意这里单独写了一个方法
        self.acls = self.bridge.invoke("Acls")
        return self.acls
```

以上便是 b.py 文件的全部内容，我们没有向 a 文件 import 任何东西，这是因为我们将注册放到了 A 文件中。

以下是 A 文件修改过后的代码

文件 a.py

```python


from b import Bcls, Bridge

class Acls(object):

    def __init__(self):

        self.bcls = Bcls()

# 初始化 bridge 中间类
bridge = Bridge()
# 初始化 Acls
A = Acls()
# 将 A 注册到 bridge 中
bridge.register("Acls", A)

# 此时再 invoke Bcls 中的 Acls
# 可以看到 Acls 被注册进 Bcls 了
print(A.bcls.invoke_acls())

```

运行结果如下

```python
<__main__.Acls object at 0x7f18f49e95d0>

```

## 总结

此类相互引用的问题在工程中尽量避免，虽然现在有较好的解决办法，但是如果能在源头控制下来当然是最好的。在工程化中，文件的定义相当重要，工具支撑/业务分支/工程入口 等等每一类文件最好独立开来，这样最大程度上避免此类问题。

设计模式是个好东西，希望大家都学一下。
