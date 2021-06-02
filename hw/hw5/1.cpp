#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<double> ans;
    ans.resize(n);
    fill(ans.begin(), ans.end(), INT_MAX);

    while (--n >= 0)
    {
        int m;
        cin >> m;
        vector<double> x, y;
        x.resize(m);
        y.resize(m);

        while (--m >= 0)
        {
            cin >> x.at(x.size() - m - 1) >> y.at(y.size() - m - 1);
        }

        for (int i = 0; i < x.size(); i++)
        {
            for (int j = i + 1; j < y.size(); j++)
            {
                if (ans.at(ans.size() - n - 1) > pow((pow((x.at(i) - x.at(j)), 2.) + pow((y.at(i) - y.at(j)), 2.)), 0.5))
                    ans.at(ans.size() - n - 1) = pow((pow((x.at(i) - x.at(j)), 2.) + pow((y.at(i) - y.at(j)), 2.)), 0.5);
            }
        }
    }

    for (int i = 0; i < ans.size(); cout << fixed << setprecision(3) << ans.at(i) << endl, i++)
        ;

    return 0;
}