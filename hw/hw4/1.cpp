// Simple C++ program to find k'th smallest element
#include <algorithm>
#include <iostream>
using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr + n);

    // Return k'th element in the sorted array
    return arr[k - 1];
}

// Driver program to test above methods
int main()
{
    int arr[20];
    int n = sizeof(arr) / sizeof(arr[0]), k = 0, count;
    cin >> count;
    for (int i = 0; i < count; ++i)
    {
        for (int i = 0; i < 20; ++i)
            cin >> arr[i];
        cin >> k;
        cout << kthSmallest(arr, n, k) << endl;
    }
    return 0;
}
