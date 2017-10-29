# coding = utf-8
# 有锁的情况下

import threading
import time


lock = threading.Lock()
num = 0

class Mythread(threading.Thread):

    def __init__(self, count):

        super(Mythread, self).__init__()
        self.count = count

    def run(self):
        global lock, num
        time.sleep(1)
        if lock.acquire():

            num += 1
            print('thread {0} num is {1}'.format(self.count, num))
            lock.release()
            # lock.acquire()


def main():

    lst = []
    for i in range(1000):

        t = Mythread(i)
        lst.append(t)

    for j in lst:
        j.start()

    for k in lst:
        k.join()

if __name__ == '__main__':
    main()
