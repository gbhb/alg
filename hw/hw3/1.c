
#include <stdio.h>
int main()
{
    int nn, i, n, t1 = 0, t2 = 1, nextTerm;

    scanf("%d", &nn);
    while (nn > 0)
    {
        scanf("%d", &n);

        for (i = 1; i <= n; ++i)
        {

            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%d\n", t1);
        nn--;
        t1 = 0;
        t2 = 1;
    }
    return 0;
    return 0;
}