// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
int arr(int arrl[], int sized)
{
    cout << "Run Before";

    arrl[1] = 69;
    for (int i = 0; i < sized; i++)
    {
        cin >> arrl[i];
    }

    cout << "Run After";
}
int main()
{
    int arrk[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arrk[i];
    }

    arr(arrk, 5);

    return 0;
}