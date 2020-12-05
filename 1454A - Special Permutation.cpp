#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int i, a[n];
		for (i = 1; i <= n; i++)
		{
			a[i - 1] = i;
		}
		for (i = 0; i < n - 1; i++)
		{
			swap(a[i], a[i + 1]);
		}
		for (i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
