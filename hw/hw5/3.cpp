#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int c;
    cin >> c;
    double a[c];
    for (int i = 0; i < c; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + c);

    int o = 0;
    double box = 0;
    for (int i = 0; i < c; i++)
    {
        box = box + a[i];
        if (box > 1)
        {

            box = a[i];
            o++;
        }
    }
    if (box != 0)
        o++;
    cout << o;
    return 0;
}