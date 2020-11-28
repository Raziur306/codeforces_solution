#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	if ((m * a) > b)
	{
		int x = n % m;
		if (x * a > b)
		{
			cout << (n / m)*b + b;
		}
		else
		{
			cout << (n / m)*b + x*a;
		}
	}
	else
	{
		cout << n*a << endl;
	}
 
	return 0;
}
