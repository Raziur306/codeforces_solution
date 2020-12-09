#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, m, i, e, o;
		cin >> n >> m;
		e = n - ((m - 1) * 2);
		o = n - (m - 1);
		if (e % 2 == 0 && e > 0)
		{
			cout << "YES\n";
			for (i = 0; i < m - 1; i++)
			{
				cout << 2 << " ";
			}
			cout << e << endl;
		}
		else if (o % 2 != 0 && o > 0)
		{
			cout << "YES\n";
			for (i = 0; i < m - 1; i++)
			{
				cout << "1 ";
			}
			cout << o << endl;
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
