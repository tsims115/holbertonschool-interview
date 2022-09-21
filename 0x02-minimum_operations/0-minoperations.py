#!/usr/bin/python3
"""minimum operations to achieve n"""


def minOperations(n):
    """determines if n can be achieved"""
    num_chars = 1
    num_ops = 0
    paste = 0
    if 1 == n or n <= 0:
        return num_ops
    while True:
        if num_chars == 1:
            paste = num_chars
            num_ops += 2
            num_chars += paste
        if n % num_chars == 0:
            if n == num_chars:
                return num_ops
            paste = num_chars
            num_ops += 1
            while True:
                num_chars += paste
                num_ops += 1
                if num_chars == n:
                    return num_ops
                if n % num_chars == 0:
                    paste = num_chars
                    num_ops += 1
        num_chars += paste
        num_ops += 1
