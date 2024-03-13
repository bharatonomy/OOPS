// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
class Animal
{
public:
    float weight;
    int age;

    void speaking() { cout << "Speaking" << endl; }
};

class Dog : public Animal
{
};
int main()
{

    Dog d;
    d.speaking();
    // Code here.

    return 0;
}