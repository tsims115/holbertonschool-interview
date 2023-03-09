#!/usr/bin/python3
"""
0-island_permiter
"""
def island_perimeter(grid):
    """Island_permiter"""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if i == 0:
                if grid[i][j] == 1:
                    count += 4
            if grid[i][j] == 1:
                count += 2
    return count + 2
