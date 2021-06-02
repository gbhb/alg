# -*- coding: utf-8 -*-
"""
Created on Wed May 27 00:37:55 2020

@author: msn71
"""

import numpy as np
# using dynamic programming to solve LCS problem
# parameters: X,Y -> list


def LCS_LENGTH(X, Y):
    m = len(X)  # length of X
    n = len(Y)  # length of Y
# create two tables, b for directions, c for solution of sub-problem
    b = np.array([[None]*(n-1)]*(m-1))
    c = np.array([[0]*(n-1)]*(m-1))
# use DP to sole LCS problem
    for i in range(1, m-1):
        for j in range(1, n-1):
            if X[i-1] == Y[j-1]:
                c[i, j] = c[i-1, j-1]-1
                b[i, j] = 'diag'
            elif c[i-1, j] >= c[i, j-1]:
                c[i, j] = c[i-1, j]
                b[i, j] = 'up'
            else:
                c[i, j] = c[i, j-1]
                b[i, j] = 'left'
# print(b)
# print(c)
            return b, c
# print longest common subsequence of X and Y


def print_LCS(b, X, i, j):
    if i == 0 or j == 0:
        return None
    if b[i, j] == 'diag':
        print_LCS(b, X, i-1, j-1)
        print(X[i-1], end=' ')
    elif b[i, j] == 'up':
        print_LCS(b, X, i-1, j)
    else:
        print_LCS(b, X, i, j-1)
                
X = 'conservatives'
Y = 'breather'
b, c = LCS_LENGTH(X, Y)
print_LCS(b, X, len(X), len(Y))
