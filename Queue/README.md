# Queue Data Structure

This directory contains C++ implementations of Queue and Deque (Double Ended Queue) data structures.

## Overview
A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO).

## Contents
Located in `Queue/`:
- **Standard Queue**:
  - `Implementation with array.cpp`: Array-based queue.
  - `implemenation using linked list.cpp`: Linked List-based queue.
  - `cicular queue using linked list.cpp` / `circular queue.cpp`: Circular queue implementations.

- **Deque (Double Ended Queue)**:
  - `Doubly ended queue.cpp`: Standard deque.
  - `doubly ended queue with stl implementation.cpp`: STL-based example.
  - `input restricted queue implementation.cpp` / `output restricted queue.cpp`: Restricted deques.

- **Applications**:
  - `sliding window problem.cpp`: Solving sliding window using deque.
  - `stack using queue...`: Implementing stack using queue.

## Usage
Compile a specific implementation:
```sh
cd Queue
g++ "Implementation with array.cpp" -o queue_array
./queue_array
```
