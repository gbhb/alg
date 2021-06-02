#include <iostream>
using namespace std;

unsigned int reverse(unsigned int num)
{
    unsigned int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

void solve(unsigned int num)
{
    unsigned int count, rev;

    count = 1;
    rev = reverse(num);
    while (1)
    {
        num = rev + num;
        rev = reverse(num);
        if (rev == num)
            break;
        count++;
    }

    cout << count << " " << rev << endl;
}

int main()
{
    int testcase;
    unsigned int num;

    cin >> testcase;
    while (testcase)
    {
        cin >> num;
        solve(num);

        testcase--;
    }
    return 0;
}