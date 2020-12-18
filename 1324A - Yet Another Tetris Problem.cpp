#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		bool b1 = false, b2 = false;
		int x;
		cin >> x;
		while (x--)
		{
			int n;
			cin >> n;
			if (n & 1)
				b1 = true;
			else {
				b2 = true;
			}
		}
		if (b1 && b2)
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}
