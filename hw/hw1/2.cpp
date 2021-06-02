#include <cstdio>
#include <iostream>
using namespace std;

// Function to check if a number is prime or not.
bool isPrime(int x)
{
    if (x == 0 || x == 1)
        return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

// Driver code
int main()
{
    int n = 0, a, b, sum = 0;
    cin >> n;
    while (n != 0)
    {
        cin >> a >> b;
        for (; a <= b; a++)
        {
            if (!isPrime(a) && a % 2 != 0)
            {
                sum += a;
            }
        }
        cout << sum << endl;
        sum = 0;
        n--;
    }
    return 0;
}
