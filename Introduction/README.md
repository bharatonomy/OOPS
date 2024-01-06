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
