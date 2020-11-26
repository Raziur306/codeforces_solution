#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int i, z = 0;
		int len = s.size();
		for (i = 0; i < len; i++)
		{
			if (s[i] == '0')
				z++;
		}
		if (min(z, len - z) % 2 == 0)
		{
			cout << "NET" << endl;
		}
		else
		{
			cout << "DA" << endl;
		}
 
	}
 
 
	return 0;
}
