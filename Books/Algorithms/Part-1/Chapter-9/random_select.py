#coding=utf-8

'''选择列表中第 i 小的元素
'''

import random

def random_select(lst, p, r, i):

    # base condition
    if p == r:
        return lst[p]

    q = partition(lst, p, r)
    print("q = ", q)
    k = q - p + 1

    if i == k:
        return lst[q]

    elif i < k:
        return random_select(lst, p, q-1, i)

    else:
        return random_select(lst, q+1, r, i-k)


# def random_partition(lst, p, r):

#     i = random.choice(list(range(len(lst))))
#     print(i)
#     lst[i], lst[r] = lst[r], lst[i]

#     return partition(lst, p, r)


def partition(lst, p, r):

    pivot = lst[r]

    begin = p - 1
    for idx, item in enumerate(lst[p:], p):
        
        if item < pivot:
            begin += 1
            lst[begin], lst[idx] = lst[idx], lst[begin]

    lst[begin+1], lst[r] = lst[r], lst[begin+1]
    return begin+1


lst = list(range(10))
random.shuffle(lst)

print(lst)
print(random_select(lst, 0, len(lst)-1, 5))