#include <iostream>
#include "Hero.h"
using namespace std;

class IamEmpty
{
    // This is an empty class.
    // Just assign it in the memory - 1 byte is allocated to the object.
};

int main()
{
    Hero h1;
    IamEmpty Emp;

    cout << sizeof(Emp) << endl;

    h1.level = 's';
    cout << h1.level << endl;
    return 0;
}