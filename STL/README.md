# Standard Template Library in C++

- A set of tools in available in C++ platform.
- Code quickly, efficiently and in a generic way.

### Generic Programming

- Data types not specified on its implementation but rather in its use.
- Compile-time Polymorphism

### Generic Types in C++

C++ enables generic programming by means of special constructs called Templates.
Example:

```
template <typename T>
T area(T a,T b){
    T result = a*b;
    return result;
}


int x = area<int>(5,10)
int y = area<double>(5.50,14.70)
```

## Containers

Objects that handle a collection of other objects (elements) implementing a well-defined data structure.
E.g., vectors,stacks,queues,maps,pairs.

- Sequence: vector, stack, queue, list, dequeue, O(n), O(log n)
- Container Adapters:
- Associative:
  - Ordered: balanced binary, set, map, multimap, multisets, O(log n)
  - Unordered: Hash Table, O(1)

## Array

Elements of similar type stored in a continous memory allocation.
In STL array is static.
Some methods provided in STL array are:

1. **arr.at(_index_) :** To get the value using the index.
2. **arr.empty() :** To check whether array is empty or not. Returns True or False.
3. **arr.front() :** To check the first element of array.
4. **arr.back() :** To check the last element of array.

## Vector

Vector works similar to dynamic array.

Some methods in Vector STL are:

1.  **vec.capacity() :** Tells the capacity of the vector to store the elements. Memory occupied.
2.  **vec.push_back(element) :** Pushes the element in the vector from the rear end.
3.  **vec.at(_index_) :** Element at the given index.
4.  **vec.front() :** Element at the front end.
5.  **vec.back() :** Element at the rear end.
6.  **vec.pop_back() :** Delete from the rear end.
7.  **vec<int> name(size,initial_value) :** To initialize the whole vector with singular value.
8.  **vec<int> name(copy_vector) :** To copy the vector properties to another vector.

## Deque

Doubly ended queue.

## List

Made using Doubly Linked List
It stores address of previous node, next node and value in a node.

Time complexity of every function is O(1) except erase() which has O(n).

## Stack

## Queue

## Priority Queue

## Set

## Map

## STL Algorithms
