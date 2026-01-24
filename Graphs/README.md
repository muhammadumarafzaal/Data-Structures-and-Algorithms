# Graph Data Structures & Algorithms

This directory contains C++ implementations of Graph data structures and standard graph algorithms.

## Overview
A Graph is a non-linear data structure consisting of nodes and edges. The nodes are sometimes also referred to as vertices and the edges are lines or arcs that connect any two nodes in the graph.

## Contents
- **Representations**:
  - `Adjencymatrix.cpp`: Adjacency Matrix representation.
  - `AdjencyList.cpp`: Adjacency List representation.
  - `Listwighted.cpp`, `AdjMatr with weights.cpp`: Weighted graph implementations.

- **Traversal Algorithms**:
  - `Bfs Dfs .cpp`: Breadth-First Search (BFS) and Depth-First Search (DFS).
  - `bfs dfs maps.cpp`: Traversal implementing Maps.

- **Shortest Path & MST Algorithms**:
  - `Djisktra's Algorithm.cpp`: Dijkstra's shortest path algorithm.
  - `KruskalAlgorithm.cpp`: Kruskal's algorithm for Minimum Spanning Tree (MST).
  - `Prim's algorithm.cpp`: Prim's algorithm for MST.

- **Other Algorithms**:
  - `cycledetection.cpp`: Algorithm to detect cycles in a graph.

## Usage
To run the Dijkstra's algorithm example:
```sh
g++ "Djisktra's Algorithm.cpp" -o dijkstra
./dijkstra
```
