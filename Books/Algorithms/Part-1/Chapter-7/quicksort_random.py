#coding=utf-8

import random

def quick_sort(lst, start, end):

    if start < end:

        pivot = random_partition(lst, start, end)

        quick_sort(lst, start, pivot-1)
        quick_sort(lst, pivot+1, end)

def random_partition(lst, start, end):
    pick = random.randint(start, end)
    lst[pick], lst[end] = lst[end], lst[pick]

    return partition(lst, start, end)

def partition(lst, start, end):
    pivot = lst[end]

    i = start - 1

    for j in range(start, end):
        
        if lst[j] < pivot:
            
            i += 1
            lst[i], lst[j] = lst[j], lst[i]

    lst[i+1], lst[end] = lst[end], lst[i+1]

    return i+1


if __name__ == "__main__":

    for i in range(100):
        lst = list(range(10))
        random.shuffle(lst)
        quick_sort(lst, 0, len(lst)-1)
        assert lst == list(range(10))