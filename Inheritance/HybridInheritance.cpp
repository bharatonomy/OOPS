// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
class A
{
public:
    A() { cout << "Class A"; }
};

class B
{
public:
    B() { cout << "Class B"; }
};

class C : public A, public B
{
public:
    C() { cout << "Class C"; }
};

class D : public A, public C
{
public:
    D() { cout << "Class D"; }
};

int main()
{
    D::A d;

    // Code here.

    return 0;
}