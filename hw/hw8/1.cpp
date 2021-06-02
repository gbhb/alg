#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(vector<int> set, int n, int c)
{
    // Base Cases
    int v[n + 1][c + 1];
    for (int w = 0; w <= c; ++w)
    {
        v[0][w] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int w = 0; w <= c; ++w)
        {
            if (set.at(i - 1) <= w)
            {
                v[i][w] = max(v[i - 1][w], set.at(i - 1) + v[i - 1][w - set.at(i - 1)]);
            }
            else
            {
                v[i][w] = v[i - 1][w];
            }
        }
    }
    if (v[n][c] == c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int c;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        int target;
        string buf;
        stringstream ss;

        cin.ignore();
        getline(cin, buf, ';');
        ss << buf;
        cin >> target;

        vector<int> s;
        copy(istream_iterator<int>(ss), istream_iterator<int>(), back_inserter(s));

        int n = s.size();
        if (isSubsetSum(s, n, target) == true)
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }
    return 0;
}
