// Necessary Imports
#include <iostream>
#include <queue>
using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    queue<string> q;
    q.push("Bharat");
    q.push("Bhanu");
    q.push("Mishra");
    q.push("Badmosh");

    cout << "First Element" << q.front() << endl;
    q.pop();

    cout << "Size :" << q.size() << endl;
    return 0;
}