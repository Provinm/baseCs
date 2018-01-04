#coding=utf-8

import threading
import time
# import Queue

class Th(threading.Thread):
    def __init__(self, lst, lock):
        super(Th, self).__init__()
        self.lst = lst
        self.lock = lock

    def run(self):

        idx = 0
        while True:
            self.lock.acquire()
            if idx > 5:
                break

            self.lst.append(idx)
            time.sleep(0.1)
            idx += 1
            self.lock.release()

lst = []
lock = threading.Lock()

t1 = Th(lst, lock)
t2 = Th(lst, lock)

t1.start()
t2.start()

t1.join()
t2.join()

print(lst)
