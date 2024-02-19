// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method

int main()
{
    // Code here.
    int n;

    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}