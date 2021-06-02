#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    while (scanf("%d", &t) != EOF)
    {
        for (int i = 0; i < t; i++)
        {
            scanf("%d%d", &a, &b);
            if (a > b)
                printf(">\n");
            else if (a < b)
                printf("<\n");
            else
                printf("=\n");
        }
    }
    return 0;
}