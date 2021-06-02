#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        int sindex = 0;
        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == s[sindex])
            {
                sindex++;
                if (sindex == s.length())
                    break;
            }
        }
        if (sindex == s.length())
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}