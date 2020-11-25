#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, m;
	cin >> n >> m;
	if (m == 1)
	{
		ll ans = n * (n - 1) / 2;
		cout << ans << " " << ans  << endl;
		return 0;
	}
	ll max, min;
	max = (n - m + 1) * (n - m) / 2;
	ll o1 = n / m;
	ll o2 = n % m;
	ll ans1 = (o1 * (o1 - 1)) / 2;
	ll ans2 = ((o1 + 1) * o1) / 2;
	min = (ans1 * (m - o2)) + (ans2 * (o2));
	cout << min << " " << max << endl;
	return 0;
}
