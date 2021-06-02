#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> ans;

    while (--n >= 0)
    {
        int a, i = 0, sum = 0;
        cin >> a;
        while (++i <= (int)sqrt(a))
        {
            int b = a / i;
            sum = (a == b * i ? sum + i + b : sum);
        }
        if (a * 2 == sum)
            printf("%d ", sum - a);
    }

    return 0;
}