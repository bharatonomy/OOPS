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
    void lick() { cout << "LICK LICK!!"; }
};

class GermanShepherd : public Dog
{
public:
    void MeinKamf() { cout << "Das Bass"; }
};
int main()
{

    Dog d;
    d.speaking();
    GermanShepherd g;
    g.MeinKamf();
    // Code here.

    return 0;
}