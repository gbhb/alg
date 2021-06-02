#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		vector<int> dig;
		int m;
		scanf("%d", &m);
		bool ans = true;
		while (m > 9)
		{
			bool flag = false;
			for (int i = 9; i >= 2; i--)
			{
				if (m % i == 0)
				{
					m /= i;
					flag = true;
					dig.push_back(i);
					break;
				}
			}
			if (!flag)
			{
				ans = false;
				break;
			}
		}
		dig.push_back(m);
		if (ans)
		{
			sort(dig.begin(), dig.end());
			int l = dig.size();
			for (int i = 0; i < l; i++)
			{
				printf("%d", dig[i]);
			}
			printf("\n");
		}
		else
			printf("-1\n");
	}
	return 0;
}