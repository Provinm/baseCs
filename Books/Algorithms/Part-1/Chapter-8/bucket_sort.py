#coding=utf-8

import random

def bucket_sort(lst):
    
    buckets = [[] for i in range(10)]

    for idx, item in enumerate(lst):        
        buckets[item].append(item)

    return [i for l in buckets for i in l]



lst = list(range(10)) * 5
random.shuffle(lst)

lst = random.sample(lst, 10)

print(lst)
print(bucket_sort(lst))
