#include <cmath>
#include <iostream>
using namespace std;

int plusToN(int n)
{
    return (1 + n) * n / 2;
}

int getAns(int j, int k)
{
    int halfup = plusToN(j);
    if (k > halfup)
        k = j * j - k + 1;
    //
    int m = (int)floor(sqrt(k * 2));
    for (int i = m - 1;; ++i)
    {
        int low = plusToN(i), high = plusToN(i + 1);
        if (low < k && k <= high)
        {
            int index = k - low;
            int maxNum = (i + 1) / 2;
            if (index > maxNum)
                index = i + 1 - index + 1;
            return index;
        }
    }
}

int main()
{
    int times, j, k;
    cin >> times;
    while (times--)
    {
        cin >> j >> k;
        cout << getAns(j, k) << endl;
    }
}