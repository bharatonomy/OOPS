// Necessary Imports
#include <iostream>

using namespace std;
// Define a Class or Method
int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr1[4] = {2, 9, 4, 5};

    cout << arraySum(arr1, 4);

    return 0;
}