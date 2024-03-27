// Necessary Imports
#include <iostream>
#include <set>
using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(9);

    for (auto i : s)
        cout << i << endl;
    cout << endl;
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for (auto i : s)
        cout << i << endl;
    cout << endl;

    cout << "is 5 present" << s.count(5);
    set<int>::iterator itr = s.find(5);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << "";
    }
    cout << endl;

    return 0;
}