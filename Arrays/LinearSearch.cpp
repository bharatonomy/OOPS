// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int ele;
    int arr[10] = {1, 2, 3, 4, 3, 33, 43, 23, 65, 76};
    cout << "Enter the element to search for:";
    cin >> ele;
    if (linearSearch(arr, 10, ele))
    {
        cout << "Key is present";
    }
    else
    {
        cout << "Key is absent";
    }
    return 0;
}