# C++ Programming

### How Does a execution of a program takes place.

![](../assets/image/execofprog)

### Features of compilers:

- Translation handling
- Error Handling

### What is IDE?

Integrated Development Environment: Write and execute program as per suitable and customized enviroment for that specific languages.

## Basic C++ Program

The `main()` function is where the execution of the program begins.

```c++
int main(){ return 0; }
```

`cout` provides the print functionality in C++

```c++
cout<<"Hello World";
```

it is provided by the `<iostream>` module or header file.

### Data Types

There are different types of data structures available.

- int : Stores integer type data.

```c++
int num = 69;
```

- char: Stores just a character.

```c++
char ch = 'L';
```

- bool: Stores boolean type data either 1 or 0 and true or false.

```c++
bool cool = false;
bool pool = 1; // Turns out to be true.
```

- float, double: Stores decimal data types. Double can store more trailing decimal values as compared to float.

```c++
float fl = 420.69;
double db = 69.42069420;
```

And more such data structures are there.

To find the size occupied by the variables in the memory we can use sizeof() method.

```c++
int size = sizeof(69);
```

A character is converted into its ASCII value then to binary to store.

We can typecast the variables.

```c++
char num = 69;
```

The above will give out a character value.

`char` have upper limit of $2^8 -1$ and `int` have upper limit of $2^32 -1$. so when we typecast an int value of larger size into char the result is undesirable.

**How negative numbers are stored?**
Let's take -5 as an example.
It will be stored as 0000 0000 0000 0101

- Convert the modulo of the number to binary (101)
- Operate 2s complement on it.

  - 1s Complement: Flips the bits 101 = 010.

    1111 1111 1111 1010

  - 2s Complement Just add 1 to the bits 010 = 011.

    1111 1111 1111 1011

    The 1 on the leftmost bit is used to determine the negativity of the value.

- Now the value is stored in the memory.
- To access the value of negative integer the reverse of above steps is performed at the time of compilation.

unsigned int stores only positive integer values.

```c++
unsigned int unint = 69;
unsigned int nuint = -69; // Will give out garbage value.
```

The garabage value occurs as it does the 2s compliment on the value but at the time of access doesn't changes reverses it back is it denoted as unsigned.

### Macros

Macros are replaced by the value at the compile time. It is also constant and cannot be changed.

```c++
#define PI 3.14

```

This would not take space in memory would rather just replace any PI with 3.14 before compilation.

Preprocessor Directive : includes the code provided by this file at the compile time.

```c++
#include <iostream>
```

### Scope Resolution

Local variables are defined inside a block of method. And they can be accessed inside that block only.

```c++
void lmao(){
    char a = "a";
    cout<<a;
}

cout<<a;
```

Only first cout will work. Another one will give error.

Global variables are hoisted at the top of the program and can be excessed throughout it.

```c++
char a = "b";

int main(){
cout<<a;
    return 0;}
```

BUT generally it is considered a BAD practice to use global variables. As they can be changed at instant of program.

So when variables needed to shared it is a better to create a reference variable.

### Inline Functions

Is used to reduce function call overhead.

It works same as macros.

But it need to be smaller in size not more than 2 lines.

### Default Arguments

Pre-assigning the argument with a variable. Making it optional.

Start with the rightmost argument to prevent errors.

```c++
void print(int arr[],int size, int start=0){}
```

## Conditionals & Loops
