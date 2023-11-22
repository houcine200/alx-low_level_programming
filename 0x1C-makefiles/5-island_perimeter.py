#!/usr/bin/python3
""" This module finds the parameter
    of an island. 0's are water 1's
    are land. Find how many 0's are
    touched by the 1's """


def island_perimeter(grid):
    """ Finds the perimeter of an island """

    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:  # let's check when it finds a 1
                if i == 0 or grid[i - 1][j] == 0:  # check top
                    count += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:  # check down
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:  # check left
                    count += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:  # check right
                    count += 1
    return(count)
