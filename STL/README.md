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
- Associative
  - Ordered: balanced binary, set, map, multimap, multisets, O(log n)
  - Unordered: Hash Table, O(1)
