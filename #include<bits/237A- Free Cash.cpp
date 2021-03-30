#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, h, m, count = 1;
	map<pair<ll, ll>, ll> mp;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		cin >> h >> m;
		mp[ {h, m}]++;
		if (mp[ {h, m}] > count)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
