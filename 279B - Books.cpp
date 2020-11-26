#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, t;
	cin >> n >> t;
	ll a[n], i, sum = 0, k = 0, count = 0;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if (sum <= t)
		{
			count++;
		}
		else
		{
			sum -= a[k];
			k++;
		}
	}
	cout << count << endl;
 
	return 0;
}
