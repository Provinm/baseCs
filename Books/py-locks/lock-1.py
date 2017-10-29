# coding = utf-8
# 没有锁会出现什么样的情况

import threading
import time
num = 0


class Mythread(threading.Thread):

    def __init__(self, count):
        super(Mythread,self).__init__()
        self.count = count

    def run(self):
        '''
        没有锁的情况下，线程的执行顺序随机，不可控
        '''
        global num
        time.sleep(1)
        num += 1
        print('thread {0} num is {1}'.format(self.count, num))


def main():

    for i in range(1000):

        t = Mythread(i)
        t.start()

if __name__ == '__main__':
    main()
