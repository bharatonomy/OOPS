// Necessary Imports
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// Define a Class or Method

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);

    cout << "Finding 6 -->" << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Lower bound->" << lower_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    cout << "Upper bound->" << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;
    int a = 3;
    int b = 5;
    cout << "Max" << max(a, b);
    cout << "Min" << min(a, b);
    swap(a, b);

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << abcd;

    rotate(v.begin(), v.begin() + 1, v.end());
    sort(v);

    return 0;
}