#!/usr/bin/python3
""" Contains canUnlockAll function """


def canUnlockAll(boxes):
    """checks to see if it can unlock all boxes"""
    key_list = []
    unlocked_boxes = []
    n = len(boxes)
    count = 0
    i = 0
    flag = 0
    while i < n:
        if ((i == 0) or (i in key_list)) and (i not in unlocked_boxes):
            for key in boxes[i]:
                key_list.append(key)
            unlocked_boxes.append(i)
            count += 1
            flag = 1
        if i == n - 1:
            if flag == 1:
                flag = 0
            else:
                return False
            if count != n:
                i = 0
                continue
        if count == n:
            return True
        i += 1
