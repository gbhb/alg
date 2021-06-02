#include <stdio.h>

int main()
{
    int b[1001] = {0}, n, test = 0, i, j, nn;
    scanf("%d", &nn);
    while (nn > 0)
    {
        scanf("%d", &n);
        int flag = 0;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &b[i]);
            if (b[i] <= b[i - 1])
            {
                flag = 1;
            }
        }
        int mark[20001] = {};
        if (flag == 0)
            for (i = 1; i <= n; i++)
            {
                for (j = i; j <= n; j++)
                {
                    if (mark[b[i] + b[j]] != 0)
                        flag = 1;
                    mark[b[i] + b[j]] = 1;
                }
            }
        if (!flag)
            printf("true\n");
        else
            printf("false\n");

        nn--;
    }
    return 0;
}