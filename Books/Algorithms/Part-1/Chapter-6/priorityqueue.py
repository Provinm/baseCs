#coding=utf-8

'''
implement priority queue using python

'''

import random


class Pqueue(list):

    def __init__(self, lst=""):

        self.lst = lst or []
        self.build_max_heap()

    def _max_heapify(self, lst, length, i):

        lst = self.lst
        # find out left and right children index
        left = 2 * i if i != 0 else 1
        right = left + 1

        # if left index less than whole length
        # and the number of left index is bigger than the i index
        # recode the _max index
        if left < length and lst[left] > lst[i]:
            _max = left

        else:
            _max = i

        # compare the right index of number with the _max
        # find out the biggest index
        if right < length and lst[right] > lst[_max]:

            _max = right

        # if the i index number is not the biggest
        # swap the number and keep heapify
        if _max != i:
            lst[_max], lst[i] = lst[i], lst[_max]
            # print("swap i={},a _max={}, lst={}".format(i, _max, lst))
            self._max_heapify(lst, length, _max)

    def heap_maxmum(self):
        '''
        '''
        return self.lst[0]

    def heap_extract_max(self):
        
        assert self.lst, "empty priority queue"

        _max = self.lst[0]
        self.lst[0] = self.lst[-1]
        self.lst.pop(-1)

        self._max_heapify(self.lst, len(self.lst), 0)
        return _max

    def build_max_heap(self):
        
        start = len(self.lst) // 2

        for i in range(start, -1, -1):
            length = len(self.lst)
            self._max_heapify(self.lst, length, i)


    def push(self, item):
        
        self.lst.insert(0, item)
        self._max_heapify(self.lst, len(self.lst), 0)

    def __str__(self):
        
        return str(self.lst)

    
if __name__ == "__main__":

    lst = list(range(10))
    random.shuffle(lst)

    pq = Pqueue(lst)

    print(pq)

    pq.push(11)
    pq.push(-1)

    while True:

        print(pq.heap_extract_max())