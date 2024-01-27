# Arrays

List with same type of elements is called an array. Elements are stored in a contiguous memory location.

## Declaration

```c++
int arr[10];
```

As an int is of size 4 byte. Address would be 100, 104, 108....., 140

entire array can be intialized using one element like this if that element is 0.

```c++
int arr[10]=0;
```

for other elements we need to used loops to store the value.

Theres a difference between size and length of an array

Putting a variable at the place of size is not a good practice. Better to statically define the size.
