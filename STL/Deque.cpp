#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(3);

    for (int i : d)
        cout << i;

    d.pop_back();
    d.pop_front();

    cout << "At Index 2" << d.at(2) << endl;

    cout << "Front" << d.front() << endl;
    cout << "Back" << d.back() << endl;

    cout << 'Is Empty' << d.empty() << endl;

    d.erase(d.begin(), d.begin() + 3);

    cout << "Size: " << d.size();
    return 0;
}