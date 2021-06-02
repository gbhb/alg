#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int c, n, k, temp;
    int cigarette;
    cin >> c;
    while (c--)
    {
        scanf("%d%d", &n, &k);
        cigarette = n;
        while (n / k)
        {
            cigarette += n / k;
            n = n / k + n % k;
        }
        printf("%d\n", cigarette);
    }
    return 0;
}
