# Foundations

This module visits some basic concepts of C++ and explores an implementation of A* algorithm.

# Part 1

The first part of this project contains an implementation of a board reader.

The program receives an input with the following format:

```
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,1,0,0,0,0,
0,0,0,0,1,0,
```

The input represents a board, in which 0 indicates an empty spot and 1 indicates an obstacle.
The program should be able to read a file with an input like this and create a representation of a board.
Until now, the board has rows with the same number of elements. After reading the input, the program should be able to print a board in the following format:

```
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   ⛰️   0   0   0   0
0   0    0   0  ⛰️   0
```