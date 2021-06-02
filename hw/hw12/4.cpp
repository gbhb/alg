#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, Case = 0;

	while (cin >> n)
	{

		int count = 0;
		string c;

		while (n--)
		{
			bool diff = false;
			int alphabet[26] = {};
			int len = 0;

			cin >> c;
			for (int i = 0; i < c.size(); i++)
			{
				alphabet[c[i] - 'a']++;
				len++;
			}

			bool num[31] = {}, isCool = true;
			for (int i = 0; i < 26; i++)
			{
				if (alphabet[i])
				{
					//看數字是否重複或字母只有一種
					if (num[alphabet[i]] || len == alphabet[i])
					{
						isCool = false;
						break;
					}
					else
						num[alphabet[i]] = true;
				}
			}

			if (isCool)
				count++;
		}

		printf("Case %d: %d\n", ++Case, count);
	}

	return 0;
}