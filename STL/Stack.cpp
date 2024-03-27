// Necessary Imports
#include <iostream>
#include <stack>

using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    stack<string> s;
    s.push("bharat");
    s.push("badmosh");
    s.push("mishra");
    cout << "Top Elment->" << s.top() << endl;
    s.pop();
    cout << "Size of stack" << s.size() << endl;
    cout << "Empty or not" << s.empty() << endl;
    return 0;
}