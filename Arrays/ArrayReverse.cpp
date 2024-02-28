// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method

void reverseArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Code here.
    int n = 8;
    int arr[8] = {2, 3, 3, 4, 5, 6, 2, 4};

    return 0;
}