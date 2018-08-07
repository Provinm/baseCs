#coding=utf-8

import random

# heapify the list
def heapify(lst, length, i):
    
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
        heapify(lst, length, _max)

def build_max_heap(lst, length):

    start = length // 2
    for i in range(start, -1, -1):
        heapify(lst, length, i)

def heap_sort(lst):
    
    build_max_heap(lst, len(lst))
    length = len(lst)
    for i in range(length-1, 0, -1):
        lst[0], lst[i] = lst[i], lst[0]
        length -= 1
        heapify(lst, length, 0)

    return lst

        
lst = list(range(10))

random.shuffle(lst)

print("origin list = ", lst)

lst = heap_sort(lst)

print("after heapify = ", lst)
