
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, j, n, tale = 0;
    cin >> j;
    while (j > 0)
    {
        scanf("%d", &n);
        int a[n], avg = 0, count = 0;
        tale++;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            avg += a[i];
        }
        avg /= n;
        for (i = 0; i < n; i++)
            count += abs(avg - a[i]);
        printf("%d\n", count / 2);
        j--;
    }
    return 0;
}