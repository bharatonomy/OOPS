#include <iostream>
using namespace std;

class Hero
{
public:
    Hero()
    {
        cout << "Default Contructor";
    }

private:
    int health;
    char level;
};

int main()
{
    Hero h; // This will call the constructor

    return 0;
}