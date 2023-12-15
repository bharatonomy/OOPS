#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    float height;

public:
    int getAge()
    {
        return this->age;
    }

    int setAge(int age)
    {
        this->age = age;
    }
};

int main()
{
    Student firstStd;
    firstStd.setAge(69);
    cout << firstStd.getAge();
    return 0;
}