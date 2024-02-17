#include <iostream>
using namespace std;

class Zero
{
public:
    // Static data member
    static int timeToComplete;
    char level;
    int health;
    Zero(int health, char level)
    {
        this->level = level;
        this->health = health;
        print();
    }

    Zero(Zero *temp)
    {
        level = temp->level;
        health = temp->health;
        print();
    }
    // Shallow Copy Constructor
    Zero(Zero &temp)
    {
        this->level = temp.level;
        this->health = temp.health;
        print();
    }
    // Deep Copy Constructor
    Zero(Zero &temp)
    {
        char *ch = new char[strlen(temp.level) + 1];
        strcpy(ch, temp.level);
        this->level = ch;
        this->level = temp.level;
        this->health = temp.health;
        print();
    }
    ~Zero()
    {
        cout << "Destructor called";
    }
    void print()
    {
        cout << "The Level is " << this->level << endl;
        cout << "The Health is " << this->health << endl;
    }
};

int Zero::timeToComplete = 6;

int main()
{
    // Better way of accessing static data member. Can be accessed the normal way too.
    cout << Zero::timeToComplete << endl;

    Zero z(69, 'F');
    Zero k(73, 'D');
    Zero w(73, 'D');

    // Copy Contructor
    Zero j(&k);
    Zero l(z);

    // Also
    Zero m = w;
    m.health = 3;

    // Static Allocation
    Zero g(z);

    // Dynamic Allocation
    Zero *h = new Zero();

    // manual destrcutor call
    delete h;

    return 0;
}