
#include <stdio.h>
int main()
{
    long long nn, hh, a, ss[3] = {0}, sum;
    while (scanf("%lld", &nn) != EOF)
    {
        sum = 0;
        hh = (nn + 1) / 2;
        a = hh*hh*2+1;
        ss[0] = a - 2;
        ss[1] = a - 4;
        ss[2] = a - 6;
        sum = ss[0] + ss[1] + ss[2];
        printf("%lld\n", sum);
    }
    return 0;
}