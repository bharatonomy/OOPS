// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
class Animal
{
public:
    float weight;
    int age;

    void Shit() { cout << "I am shittin right now" << endl; }
};

class Dog : public Animal
{
    void Bark() { cout << "Bow!! Bow!!"; }
};

class Cat : public Animal
{
public:
    void Meow() { cout << "Meow :3"; }
};
int main()
{

    Dog d;
    d.Shit();
    Cat g;
    g.Meow();
    // Code here.

    return 0;
}