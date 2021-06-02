#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
using namespace std;
int Max_Son(int *p, int len)
{
    int Max_Sum = INT_MIN;
    int i, j;
    for (i = 0; i < len; ++i)
    {
        int sum = 0;
        for (j = i; j < len; ++j)
        {
            sum = sum + p[j];
            if (sum > Max_Sum)
            {
                Max_Sum = sum;
            }
        }
    }
    return Max_Sum;
}

int main()
{

    int k = 0, count;
    cin >> count;
    for (int i = 0; i < count; ++i)
    {
        cin >> k;
        int *arr = new int[k];
        for (int i = 0; i < k; ++i)
            cin >> arr[i];
        cout << Max_Son(arr, k) << endl;
        delete[] arr;
    }
    return 0;
}
