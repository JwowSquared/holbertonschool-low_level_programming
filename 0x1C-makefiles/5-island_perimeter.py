#!/usr/bin/python3
"""This module holds an interview question from 0x1C-makefiles"""


def island_perimeter(grid):
    """returns the perimeter of the island described by grid"""
    out = 0
    height = len(grid)
    width = len(grid[0])
    for row in range(height):
        for idx in range(width):
            if grid[row][idx] is 1:  # did we find a land tile?
                out += 4
                if row - 1 > -1 and grid[row - 1][idx] is 1:  # check up
                    out -= 1
                if row + 1 < height and grid[row + 1][idx] is 1:  # check down
                    out -= 1
                if idx - 1 > -1 and grid[row][idx - 1] is 1:  # check left
                    out -= 1
                if idx + 1 < width and grid[row][idx + 1] is 1:  # check right
                    out -= 1
    return out
