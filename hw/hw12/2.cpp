#include <iostream>
using namespace std;

int main()
{
    int c, a, b, t;
    cin >> c;

    while (c--)
    {
        cin >> a >> b;
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        cout << a << endl;
    }

    return 0;
}