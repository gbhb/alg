#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{

    int c;
    double n, p;
    cin >> c;
    while (c > 0)
    {
        scanf("%lf %lf", &n, &p);
        printf("%.0f\n", pow(p, 1.0 / n));
        c--;
    }
    return 0;
}