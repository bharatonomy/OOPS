#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Its Lower Case";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Its Upper Case";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Its Number Case";
    }
    else
    {
        cout << "Special Character?";
    }

    return 0;
}