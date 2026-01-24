# AVL Tree Implementation

This directory contains C++ implementations of AVL (Adelson-Velsky and Landis) Trees.

## Overview
An AVL tree is a self-balancing binary search tree. In an AVL tree, the heights of the two child subtrees of any node differ by at most one; if at any time they differ by more than one, rebalancing is done to restore this property.

## Contents
- **Core Implementation**:
  - `AVL trees.cpp`: Standard AVL tree implementation with rotations (Left-Left, Right-Right, Left-Right, Right-Left).
  - `avl 2.cpp`: Alternative implementation/variation.
  
- **Practice & Assignments**:
  - `avlprac.cpp`: Practice code for AVL operations.
  - Assignment submissions (`f233106_...`) covering various tasks related to balanced trees.

## Features
- Insertion with automatic balancing.
- Deletion (if implemented in source) with rebalancing.
- Tree traversal (In-order, Pre-order, Post-order).

## Usage
Compile the main implementation:
```sh
g++ "AVL trees.cpp" -o avl
./avl
```
