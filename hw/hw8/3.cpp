

#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
#define NUM 3502
#define CAP 13002
int w[NUM], v[NUM];
int dp[CAP];
/*
    0-1背包
    */
int pack(int C, int sum)
{
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < sum; i++)
        for (int j = C; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    return dp[C];
}
int main()
{
    int T, n = 5, C;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        memset(dp, 0, sizeof(dp));
        cin >> C;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << pack(C, n) << endl;
    }
    return 0;
}
