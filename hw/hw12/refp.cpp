#include <bits/stdc++.h>

using namespace std;

static auto untie_stdio = [] { ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();

int main(int argc, char *argv[])
{
    int n, c = 1;
    while (cin >> n)
    {
        int cnt{};
        while (n--)
        {
            string str;
            cin >> str;

            map<char, int> freq;
            for (const auto &c : str)
                freq[c]++;

            if (freq.size() < 2)
                continue;

            cnt += [&] {
                set<int> fs;
                for (const auto &p : freq)
                {
                    int f = get<1>(p);
                    if (fs.count(f))
                        return false;
                    fs.insert(f);
                }
                return true;
            }();
        }

        cout << "Case " << c++ << ": " << cnt << "\n";
    }
    return 0;
}