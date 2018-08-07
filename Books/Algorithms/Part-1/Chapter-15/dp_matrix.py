#coding=utf-8
import random

def generate_matrixs(n=5):
    '''generate n matrixs
    '''
    res = []
    for i in range(n):

        res.append(random_matric())

    return res


def random_matric():

    p, m = random.sample(range(1, 10), 2)
    return [[0 for i in range(p)] for j in range(m)]


def matrix_multiply(matrixs):

    count = len(matrixs)

    r = [[0 for i in range(count)] for j in range(count)]
    s = [[0 for i in range(count)] for j in range(count)]

    


