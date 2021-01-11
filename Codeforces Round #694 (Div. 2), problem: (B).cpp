#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x;
		cin >> n >> x;
		ll a[n][64], i, j, sum = 0, count = 0;
		memset(a, false, sizeof(a));
		for (i = 0; i < n; i++)
		{
			cin >> a[i][0];
			sum += a[i][0];
		}
		for (i = 0; i < n; i++)
		{
			ll temp = a[i][0];
			for (j = 1; j < 32; j++)
			{
				if (temp % x == 0)
				{
					a[i][j] = true;
					temp /= x;
				}
				else
				{
					break;
				}
			}
		}

		for (i = 1; i < 64; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[j][i] == true)
				{
					sum += a[j][0];
				}
				else
				{
					count++;
					break;
				}
			}
			if (count > 0)
			{
				break;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
