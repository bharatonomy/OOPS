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

class Human
{
public:
    string color;
    void Think() { cout << "Thinkin!!"; }
};

class GermanShepherd : public Human, public Animal
{
public:
    void MeinKamf() { cout << "Das Bass"; }
};
int main()
{

    GermanShepherd d;
    d.speaking();
    GermanShepherd g;
    g.Think();
    // Code here.

    return 0;
}