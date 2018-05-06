#encoding=utf-8

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