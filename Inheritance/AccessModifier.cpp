#include <iostream>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getWeight()
    {
        return this->weight;
    }
    int setWeight(int weight)
    {
        this->weight = weight;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

class Female : protected Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

class Child : private Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male Rakesh;
    Rakesh.setWeight(80);
    Rakesh.age = 19;
    Rakesh.height = 180;
    // Here members can be accessed as they are public.
    cout << "Weight: " << Rakesh.weight << endl; // When members are private getters and setters are used.
    Rakesh.sleep();
    cout << "Height: " << Rakesh.height << endl
         << "Age: " << Rakesh.age;

    return 0;
}