#coding = utf-8

def quick_sort(lst, start, end):

    if start < end:

        q = partition(lst, start, end)
        print("after partition", q, lst)
        quick_sort(lst, start, q-1)
        quick_sort(lst, q+1, end)



def partition(lst, start, end):

    pivot = lst[end]

    i = start - 1

    for j in range(start, end):

        if lst[j] <= pivot:
            i += 1
            print("i = {}, j={}".format(i,j))
            lst[i], lst[j] = lst[j], lst[i]
            print("in for loop", lst)

    lst[i+1], lst[end] = lst[end], lst[i+1]
    print("out for loop", lst)
    return i + 1

import random

lst = list(range(10))
random.shuffle(lst)

print("start", lst)
quick_sort(lst, 0, len(lst)-1)

print(lst)