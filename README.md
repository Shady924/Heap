# Heap Data Structure Implementation

A C++ implementation of a max-heap data structure using dynamic arrays.


## HEAP 
  A heap is a tree with some spacial properties. The basic requirement of a heap is that the value of a node must be >= (or <=) than the values of its children. All leaves should be at h or h-1 levels (where h is the height of the tree h>0 (coplete binart tree)). That means heap should form a complete binary tree.

### Types of Heaps
  - Min Heap -> The value of node must be less than or equal to values of its children.
  - Max Heap -> The value of node must be greater than or equal to values of its children.

## Complexity Analysis

| Operation | Time Complexity |
|-----------|-----------------|
| Insert    | O(log n)        |
| Delete    | O(log n)        |
| PeekMax   | O(1)            |
| Size      | O(1)            |
| IsEmpty   | O(1)            |

