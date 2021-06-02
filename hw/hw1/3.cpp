#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a;
    cout << a << "=";
    for (int i = 2; i <= a; i++)
    {
        while (a % i == 0)
        {
            a = a / i;
            count++;
        }
        if (a == 1)
        {
            if (count > 1)
                printf("%d^%d", i, count);
            if (count == 1)
                cout << i;
        }
        else
        {
            if (count > 1)
                printf("%d^%d*", i, count);
            if (count == 1)
                cout << i << "*";
        }
        count = 0;
    }

    return 0;
}