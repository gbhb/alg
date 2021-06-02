#include <bits/stdc++.h>

using namespace std;

auto untie_stdio = [] { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();

int main(int argc, char *argv[])
{
    size_t T;
    cin >> T;
    while (T--)
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

        unordered_set<int> sums;

        for (const auto &elem : s)
        {
            sums.insert(elem);

            unordered_set<int> tmp;
            for (const auto &sum : sums)
                tmp.insert(sum + elem);

            sums.insert(tmp.begin(), tmp.end());
        }

        cout << (sums.count(target) ? "True\n" : "False\n");
    }
    return 0;
}