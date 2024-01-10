#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    list<int> k(5, 100);
    l.push_back(6);
    l.push_back(7);
    cout << 'i: ';
    for (int i : l)
        cout << i << " ";

    l.erase(l.begin());

    cout << 'k: ';
    for (int i : k)
        cout << i << " ";

    cout << "Size of k: " << k.size();
    return 0;
}