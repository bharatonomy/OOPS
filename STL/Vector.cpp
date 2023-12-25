#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    cout << "Size: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size: " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size: " << v.capacity() << endl;

    cout << "Element at 2nd index" << v.at(2) << endl;
    cout << "Element at front" << v.front() << endl;
    cout << "Element at back" << v.back() << endl;

    cout << "Before pop_back()" << endl;
    for (int i : v)
        cout << i;

    v.pop_back();
    cout << endl
         << "After pop_back()" << endl;
    for (int i : v)
        cout << i;

    cout << endl
         << "Size before clear: " << v.size() << endl;

    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    vector<int> a(6, 2);
    for (int i : a)
        cout << i;

    vector<int> b(a);

    return 0;
}