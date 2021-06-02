#include <iostream>
using namespace std;
int main()
{
    int n, a, b, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum = 0;
        for (int j = a; j <= b; j++)
        {
            if ((j % 2) == 1)
            {
                sum = sum + j;
            }
        }
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    //system("pause");
}