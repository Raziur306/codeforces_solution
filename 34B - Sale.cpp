#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, sum = 0;
	cin >> n >> m;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0 && m > 0)
		{
			sum += abs(a[i]);
			--m;
		}
	}
	cout << sum << endl;
	return 0;
}
