//Add the page
//Made by 105502555 Teemo Hsu(Synasaivaltos)
//Date: 2018/03/29
/*----- ----- ----- -----*/
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> ans1;
    vector<int> ans2;

    while (--n >= 0)
    {
        int p, i = 0;
        cin >> p;
        while ((++i) * (i + 1) / 2 <= p)
            ;
        ans1.push_back(i * (i + 1) / 2 - p);
        ans2.push_back(i);
    }

    for (int i = 0; i < ans1.size(); cout << ans1.at(i) << " " << ans2.at(i) << endl, i++)
        ;

    return 0;
}