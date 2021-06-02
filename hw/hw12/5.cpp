#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	int i, n, mm;
	cin >> n;
	while (n--)
	{
		cin >> mm;
		bool product = true;
		int ans[100000], ans_size = 0;
		if (mm == 1)
			cout << 1;
		else
		{
			while (mm != 1)
			{
				for (i = 9; i > 1; i--)
				{
					if (mm % i == 0)
					{
						mm /= i;
						ans[ans_size++] = i;
						break;
					}
				}
				if (i == 1)
				{
					cout << -1;
					product = false;
					break;
				}
			}
		}
		sort(ans, ans + ans_size);
		if (product)
			for (i = 0; i < ans_size; i++)
				cout << ans[i];
		cout << endl;
	}
}