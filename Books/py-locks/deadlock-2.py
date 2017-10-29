# coding = utf-8

import threading
import time

lock = threading.RLock()
num = 0
class Mythread(threading.Thread):

    def __init__(self):

        threading.Thread.__init__(self)

    def run(self):
        global lock, num
        time.sleep(1)
        if lock.acquire():
            num += 1
            print(self.name + 'num is {}'.format(num))

            lock.acquire()
            lock.release()
            lock.release()

def test():

    for i in range(5):
        t = Mythread()
        t.start()

if __name__ == '__main__':
    test()
