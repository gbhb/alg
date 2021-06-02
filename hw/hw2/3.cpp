#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) != EOF && n > 0)
    {
        int *age = new int[n + 5];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &age[i]);
        }

        sort(age, age + n);

        for (int i = 0; i < n; ++i)
        {
            if (i > 0)
            {
                printf(" ");
            }
            printf("%d", age[i]);
        }
        printf("\n");

        delete[] age;
    }
    return 0;
}