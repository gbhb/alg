#include <iostream>
#include <queue>
#include <set>
using namespace std;
int main()
{
    //檢查數字是否重複
    long long x, y;
    //檢查數字是否重複
    int i = 0, m[3] = {2, 3, 5}, num, c;

    cin >> c;
    while (c > 0)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq; //改成數字小的最上面
        set<long long> s;
        i = x = y = 0;

        cin >> num;

        pq.push(1);
        s.insert(1);

        while (i < num)
        {
            x = pq.top();
            i++;
            if (i == num)
            {
                cout << x << endl;
                break;
            }
            pq.pop();
            for (int j = 0; j < 3; j++)
            {
                y = x * m[j]; //計算新的數字
                if (s.count(y) == 0)
                {                //是否曾經產生過，沒有產生時
                    s.insert(y); //將y加入s
                    pq.push(y);  //將y加入pq
                }
            }
        }
        c--;
    }
}