// Necessary Imports
#include <iostream>
#include <map>
using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    map<int, string> m;
    m[1] = "Bharat";
    m[69] = "Bhanu";
    m[3] = "Mishra";
    m.insert({5, "John Cena"});
    for (auto i : m)
        cout
            << i.first << " " << i.second << endl;

    cout << "Finding 13 : " << bool(m.count(13));
    return 0;
}