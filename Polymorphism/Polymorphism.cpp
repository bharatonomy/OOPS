// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
class A
{
public:
    void sayHello()
    {
        cout << "Hello Bharat." << endl;
    }

    // Change in signature of the function is needed.
    void sayHello(string name)
    {
        cout << "Hello " << name << "." << endl;
    }
    int sayHello(string name, int game)
    {
        cout << "Hello " << name << game * 5 << "." << endl;
    }
};

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class Dog : Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};
int main()
{

    Dog obj;
    obj.speak();
    A a;
    a.sayHello(); // Code here.

    return 0;
}