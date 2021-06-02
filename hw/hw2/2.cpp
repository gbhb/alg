#include <cstdio>
#include <iostream>
using namespace std;
int Euler(int n) //1.直接求歐拉函數的值
{
    int rea = n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) //第一次找到的必為素因子
        {
            rea = rea - rea / i;
            while (n % i == 0)
            {
                n = n / i; //把該素因子全部約掉
            }
        }
    if (n > 1)
        rea = rea - rea / n;
    return rea;
}
int main()
{
    int a, n;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> n;
        cout << Euler(n) << endl;
    }
    return 0;
}