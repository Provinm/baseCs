#coding=utf-8

import random

def counting_sort(lsta, lstb, k):

    lstc = [0 for i in range(k)]

    for j in range(len(lsta)):

        lstc[lsta[j]] = lstc[lsta[j]] + 1

    print(lsta)
    print("lstc, before m", lstc)

    for m in range(1, k):
        lstc[m] = lstc[m] + lstc[m-1]

    print(lsta)
    print("lstc, after m", lstc)

    # for n in range(len(lsta)-1, -1, -1):
    #     print(n)
    #     lstb[lstc[lsta[n]]] = lsta[n]
    #     lstc[lsta[n]] = lstc[lsta[n]] - 1

    for idx, item in enumerate(lsta):
        print(idx, item)
        lstb[lstc[item] - 1] = item
        lstc[item] = lstc[item] - 1


if __name__ == "__main__":

    lst = list(range(10))
    lst[2] = 5
    random.shuffle(lst)
    lst_ = lst[:]

    counting_sort(lst, lst_, 10)

    print("a", lst)
    print("b", lst_)
