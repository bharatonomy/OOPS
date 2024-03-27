// Necessary Imports
#include <iostream>
#include <queue>
using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    // Max, Min in Priority Queue.
    // Max heap
    priority_queue<int> maxi;
    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(4);
    maxi.push(3);
    maxi.push(5);
    maxi.push(7);
    maxi.push(2);
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }

    mini.push(1);
    mini.push(4);
    mini.push(3);
    mini.push(5);
    mini.push(7);
    mini.push(2);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }

    return 0;
}