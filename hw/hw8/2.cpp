#include <iostream>
using namespace std;
int main()
{
    int c, target, n, change[500], method[50001]; //change[]硬幣面額數值   method[k]，到目前為止，目標金額為k的最少硬幣個數
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n >> target;
        for (int i = 0; i < n; i++)
            cin >> change[i];
        method[0] = 0;
        for (int i = 1; i <= target; i++)
        {
            method[i] = 10000000; //method首先設定無窮大
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = change[i]; j <= target; j++)
            {
                if (method[j] > method[j - change[i]] + 1)
                    method[j] = method[j - change[i]] + 1;
            }
        }

        cout << method[target] << endl;
    } //system("pause");
}