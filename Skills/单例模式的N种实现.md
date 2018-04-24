
## 单例模式的N种实现

单例是一种设计模式，应用该模式的类只会生成一个实例。

单例模式广泛应用于各种生产、项目环境中，对于开发而已是必须掌握的知识点，同时在很多面试中，也会经常问到面试者。本篇文章总结了目前主流的实现单例模式的方法供读者参考。

希望看过此文的同学，在以后被面到此问题时，能直接皮一下面试官，“我会 4 种单例模式实现，你想听哪一种？”

以下是实现方法索引：

- 使用函数装饰器实现单例
- 使用类装饰器实现单例
- 使用 __new__ 关键字实现单例
- 使用 metaclass 实现单例

### 使用函数装饰器实现单例

以下是实现代码


```python
def singleton(cls):
    
    _instance = {}
    def inner():
        if cls not in _instance:
            _instance[cls] = cls()
            
        return _instance[cls]
    
    return inner
        
```


```python
@singleton
class Cls(object):
    
    def __init__(self):
        pass
```


```python
cls1 = Cls()
```


```python
cls2 = Cls()
```


```python
id(cls1) == id(cls2)
```




    True



在 Python 中，id 关键字可用来查看对象在内存中的存放位置，这里　cls1 和　cls2 的 id 值相同，说明他们指向了同一个对象。

在看实现，关于装饰器的知识，有不明白的同学可以查看之前的文章或者使用搜索引擎再学习一遍。代码中比较巧的一点是:

```python 
_instance = {}

```

使用不可变的 类地址 作为键，其实例作为值，每次创造实例时，首先查看该类是否存在实例，存在的话直接返回该实例即可，否则新建一个实例并存放在字典中。

### 使用类装饰器实现单例

代码如下：


```python
class Singleton(object):
    
    def __init__(self, cls):
        
        self._cls = cls
        self._instance = {}
        
    def __call__(self):
        
        if self._cls not in self._instance:
            self._instance[self._cls] = self._cls()
            
        return self._instance[self._cls]
```


```python
@Singleton
class Cls2(object):
    
    def __init__(self):
        
        pass
```


```python
cls1 = Cls2()
```


```python
cls2 = Cls2()
```


```python
id(cls1) == id(cls2)
```




    True



同时，由于是面对对象的，这里还可以这么用


```python
class Cls3():
    
    pass
```


```python
Cls3 = Singleton(Cls3)
```


```python
cls3 = Cls3()
```


```python
cls4 = Cls3()
```


```python
id(cls3) == id(cls4)
```




    True



使用 类装饰器实现单例的原理和 函数装饰器 实现的原理相似，理解了上文，再理解这里应该不难。

### New、Metaclass 关键字

在接着说另外两种方法之前，需要了解在 Python 中一个 实例 或者一个 类 通过哪些方法、顺序被创造的。

本文主讲单例模式，所以对这个 topic 只会点到为止，有感兴趣的同学可以依照给出的链接了解更多。

简单来说，元类(metaclass) 可以通过方法 **\_\_metaclass\_\_** 创造了 类(class)， 而 类(class) 通过方法**\_\_new\_\_** 创造了 实例(instance)。

在单例模式应用中，在创造类的过程中或者创造实例的过程中稍加控制达到最后产生的实例都是一个对象的目的。

更多的知识请参考：

- [What are metaclasses in Python?](https://stackoverflow.com/questions/100003/what-are-metaclasses-in-python?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa)
- [python-__new__-magic-method-explained](http://howto.lintel.in/python-__new__-magic-method-explained/)
- [Why is __init__() always called after __new__()?
](https://stackoverflow.com/questions/674304/why-is-init-always-called-after-new?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa)

### 使用 __new__ 关键字实现单例模式

使用 \_\_new\_\_ 方法在创造实例时进行干预，达到实现单例模式的目的。


```python
class Single(object):
    
    _instance = None
    def __new__(cls, *args, **kw):
        
        if cls._instance is None:
            
            cls._instance = object.__new__(cls, *args, **kw)
        return cls._instance
    
    def __init__(self):
        
        pass
```


```python
single1 = Single()
```


```python
single2 = Single()
```


```python
id(single1) == id(single2)
```




    True



在理解到 \_\_new\_\_ 的应用后，理解单例就不难了，这里使用了 

```python
_instance = None

```
来存放实例，如果 \_instance 为 None,则新建实例，否则直接返回 \_instance 存放的实例。

### 使用 __metaclass__ 实现单例模式

同样，我们在类的创建时进行干预，从而达到实现单例的目的。

在实现单例之前，需要了解使用 type 创造类的方法，代码如下：


```python
def func(self):
    print("do sth")
Klass = type("Klass", (), {"func": func})
```


```python
c = Klass()
```


```python
c.func()
```

    do sth


以上，我们使用 type 创造了一个类出来。这里的知识是 mataclass 实现单例的基础。


```python
class Singleton(type):
    _instances = {}
    def __call__(cls, *args, **kwargs):
        if cls not in cls._instances:
            cls._instances[cls] = super(Singleton, cls).__call__(*args, **kwargs)
        return cls._instances[cls]

class Cls4(metaclass=Singleton):
    pass
```


```python
cls1 = Cls4()
```


```python
cls2 = Cls4()
```


```python
id(cls1) == id(cls2)
```




    True



这里，我们将 metaclass 指向 Singleton 类，让 Singleton 中的 type 来创造新的 Cls4 实例。

### 小结

本文虽然是讲单例模式，但在实现单例模式的过程中，涉及到了蛮多高级 Python 语法，包括装饰器、元类、new、type 甚至 super 等等。对于新手同学可能难以理解，其实在工程项目中并不需要你掌握的面面俱到，掌握其中一种，剩下的作为了解即可。


```python

```
