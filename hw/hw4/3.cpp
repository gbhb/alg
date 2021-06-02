#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
bool **adj;  // adjacency matrix，有向圖和無向圖皆可
bool *visit; // 目前已經經過的點
int *solution;
void backtrack(int n, int v)
{
    if (n == v)
    {
        // 判斷最後一點到第一點是否頭尾銜接
        int a = solution[v - 1];
        int b = solution[0];
        if (adj[a][b])
        {
            // 找到一組解
            cout << "true" << '\n';
        }
        else
        {
            cout << "false" << '\n';
        }
        return;
    }

    int a = solution[n - 1];
    for (int b = 0; b < v; ++b)
        if (adj[a][b] && !visit[b])
        {
            visit[b] = true;
            solution[n] = b;
            backtrack(n + 1, v);
            visit[b] = false;
        }
}
int main()
{
    int n, d;
    string s, ss;
    vector<int> a;
    scanf("%d", &n);
    while (n > 0)
    {
        int v; // 點數
        int max = 0;
        scanf("%d", &v);
        d = v;
        while (d > 0)
        {

            char *p;
            const char *delim = ",";
            cin >> s;
            ss = s.substr(1, s.size() - 2);
            char cstr[ss.size() + 1];
            strcpy(cstr, ss.c_str());
            p = strtok(cstr, delim);
            while (p)
            {
                a.push_back(atoi(p));
                p = strtok(NULL, delim);
            }
            d--;
        }
        adj[a[0] - 1][a[1] - 1] = true;
        adj[a[1] - 1][a[0] - 1] = true;
        adj = new bool *[max];
        for (int i = 0; i < max; ++i)
            adj[i] = new bool[max];
        visit = new bool[max];
        solution = new int[max];

        visit[0] = true; // Hamilton Circuit從哪一點開始都行，
        solution[0] = 0; // 直接將第一個點設定為第0點，
        backtrack(1, max);

        n--;
    }
    return 0;
}
