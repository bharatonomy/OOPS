// Necessary Imports
#include <iostream>
#include <climits>

using namespace std;
// Define a Class or Method

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > maxi)
        {

            // Theres also a max(option1,option2) which determines the max number between two.
            // max(maxi,num[i]);
            maxi = num[i];
        }
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < mini)
        {
            // min(mini,num[i])
            mini = num[i];
        }
    }
    return mini;
}

int main()
{
    // Code here.
    int size;
    cin >> size;
    // int num[size];
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max Value" << getMax(num, size);
    cout << "Min Value" << getMin(num, size);
    return 0;
}