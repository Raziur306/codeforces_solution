#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll x, ans = 0;
		cin >> x;
		while (x)
		{
			if (x >= 10)
			{
				ll t = x / 10;
				x -= t * 10;
				x += t;
				ans += t * 10;
			}
			else
			{
				ans += x;
				x /= 10;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
