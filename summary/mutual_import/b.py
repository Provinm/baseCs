#encoding=utf-8

class Bcls(object):
    
    def __init__(self):
        # 初始化 bridge
        self.bridge = Bridge()
        
    def invoke_acls(self):
        # 使用别名调用　Acls
        # 注意这里单独写了一个方法
        self.acls = self.bridge.invoke("Acls")
        return self.acls


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
        