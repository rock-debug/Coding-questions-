#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    min=arr[0]
    max=arr[0]
    sum=0
    for i in arr:
        if i>max:
            max=i
        elif i<min:
            min=i
        sum+=i
    print(sum-max,sum-min)             

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
