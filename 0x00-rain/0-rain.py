#!/usr/bin/python3
"""Rain Module"""


def rain(walls):
    """rain function"""
    last_wall = 0
    wall_spaces = 0
    total = 0
    for wall in walls:
        if wall > 0:
            if wall > last_wall:
                total += last_wall * wall_spaces
            if last_wall > wall:
                total += wall * wall_spaces
            if last_wall == wall:
                total += wall * wall_spaces
            wall_spaces = 0
            last_wall = wall
        else:
            wall_spaces += 1
    return total
