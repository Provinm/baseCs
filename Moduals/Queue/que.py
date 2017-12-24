#coding=utf-8

import threading
import Queue

class Q(threading.Thread):

    def __init__(self, que):
        self.que = que
        super(Q, self).__init__()

    def run(self):

        while True:
            print 'in run'
            item = self.que.get()
            self.que.task_done()
            print 'item=', item
            if item == None:
                break
        return

que = Queue.Queue()

for i in range(5):
    que.put(i)

print 'qsize = ', que.qsize()
tasks = [Q(que) for i in range(1)]

for j in tasks:
    que.put(None)

print 'qsize= ', que.qsize()

for t in tasks:
    t.start()
    t.join()

print 'before join'
print 'qsize= ', que.qsize()
print 'q unfinished = ', que.unfinished_tasks
que.join()
