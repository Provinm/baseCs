# coding = utf-8

import threading

counterA = 0
counterB = 0

mutexA = threading.Lock()
mutexB = threading.Lock()

class MyThread(threading.Thread):

    def __init__(self):
        threading.Thread.__init__(self)

    def run(self):
        self.fun1()
        self.fun2()

    def fun1(self):
        global mutexA, mutexB
        if mutexA.acquire():
            print ("I am %s -1 , get res: %s" %(self.name, "ResA"))

            if mutexB.acquire():
                print ("I am %s -1 , get res: %s" %(self.name, "ResB"))
                mutexB.release()

        mutexA.release()

    def fun2(self):
        global mutexA, mutexB
        if mutexB.acquire():
            print ("I am %s -2 , get res: %s" %(self.name, "ResB"))

            if mutexA.acquire():
                print ("I am %s -2 , get res: %s" %(self.name, "ResA"))
                mutexA.release()

        mutexB.release()

if __name__ == "__main__":
    for i in range(0, 100):
        my_thread = MyThread()
        my_thread.start()


'''

死锁： 有两个锁 A / B 时， 程序 1 拿锁 A 等待 锁 B 的释放
同时 程序 2 拿着锁 B 等待锁 A 的释放
这时便形成的死锁。

'''
