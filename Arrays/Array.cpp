#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Array has been printed" << endl;
}
int main()
{

    // Declaration in array.
    int arr[10];

    // Indexing in array
    arr[0] = 29;

    // Initialization
    int crr[3] = {66, 78, 69};

    // Initializing entire array with one element.
    int zrr[10] = {0}; // Entire array of size 10 with element 0

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 69;
    }

    printArray(arr, 10);

    int sizearr = sizeof(arr) / sizeof(int);
    cout << endl
         << "Size of Array: " << sizearr;

    char chararr[4] = {'w', 'e', 'r', 't'};
    double doublearr[9];
    bool boolarr[4];
    float floatarr[4];
    return 0;
}