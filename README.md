# Queue Data Structure Using Linked List

This repository contains the implementation of a queue data structure using a linked list in C. Queues are FIFO (First-In-First-Out) data structures, and using a linked list allows for dynamic memory usage without a fixed size.

## Features

- **Dynamic Size:** Grows and shrinks as elements are added and removed.
- **Efficient Operations:** Provides efficient enqueue and dequeue operations.

# API Reference

- **HndQueue initLinkListQueue();**
- **int enqueue(HndQueue hnd, valueType val);**
- **int dequeue(HndQueue hnd, int\* ival);**
- **int getSize(HndQueue hnd);**
- **int isEmpty(HndQueue hnd);**
- **void clearqueue(HndQueue hnd);**
- **void destroy(HndQueue hnd);;**
