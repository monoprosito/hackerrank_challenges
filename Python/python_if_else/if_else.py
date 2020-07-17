import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())

    # n is even
    if n % 2 == 0:
        # If n in the inclusive range of 2 to 5, print Not Weird
        # If n in the inclusive range of 6 to 20, print Weird
        # If n is greater than 20, print Not Weird
        if (n >= 2 and n <= 5) or n > 20:
            print('Not Weird')
        elif n >= 6 and n <= 20:
            print('Weird')
    # n is odd, print Weird
    else:
        print('Weird')
