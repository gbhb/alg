#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    int LCS[50000];
    int a;
    cin >> a;
    cin.ignore();
    while (a--)
    {

        getline(cin, s1);
        getline(cin, s2);

        memset(LCS, 0, sizeof(LCS));
        for (int i = 1; i <= s1.length(); i++)
        {
            for (int j = s2.length(); j >= 1; j--)
                if (s1[i - 1] == s2[j - 1])
                    LCS[j] = LCS[j - 1] + 1;
            for (int j = 1; j <= s2.length(); j++)
            {
                if (s1[i - 1] != s2[j - 1])
                    LCS[j] = max(LCS[j], LCS[j - 1]);
            }
        }
        printf("%d\n", LCS[s2.length()]);
    }
    return 0;
}