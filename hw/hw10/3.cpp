#include <bits/stdc++.h>

using namespace std;

auto untie_stdio = [] { ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return 0; }();

int main(int argc, char *argv[])
{
    const vector<vector<int>> connections{{1, 2, 3}, {4, 5, 6}, {4, 5, 6}, {4, 5, 6}, {7, 8, 9}, {7, 8, 9}, {7, 8, 9}, {10}, {10}, {10}};
    vector<int> ww(24);
    for (auto &ii : ww)
        cin >> ii;

    vector<vector<pair<int, int>>> g;
    int ii = 0;
    for (const auto &c : connections)
    {
        g.push_back({});
        for (const auto &to : c)
            g.back().emplace_back(to, ww[ii++]);
    }

    vector<int> len(11, INT_MAX);
    len[0] = 0;

    queue<int> queue;
    queue.push(0);

    while (queue.size())
    {
        int s = queue.front();
        queue.pop();

        for (const auto &c : g[s])
        {
            const auto &to = c.first;
            const auto &cost = c.second;
            if (len[s] + cost < len[to])
            {
                queue.push(to);
                len[to] = len[s] + cost;
            }
        }
    }

    auto m = min_element(begin(len) + 1, begin(len) + 4);
    cout << distance(begin(len), m) << " " << *m << "\n";

    m = min_element(begin(len) + 4, begin(len) + 7);
    cout << distance(begin(len), m) << " " << *m << "\n";

    m = min_element(begin(len) + 7, begin(len) + 10);
    cout << distance(begin(len), m) << " " << *m << "\n";

    cout << 10 << " " << len[10];

    return 0;
}