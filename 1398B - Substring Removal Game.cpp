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
		vector<int> ve;
		int count = 0, alice = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '1')
			{
				count++;
			}
			else if (count > 0)
			{
				ve.push_back(count);
				count = 0;
			}
		}
		if (count > 0)
		{
			ve.push_back(count);
		}
		sort(ve.begin(), ve.end(), greater<int>());
		for (int i = 0; i < ve.size(); i += 2)
		{
 
			alice += ve[i];
		}
		cout << alice << endl;
	}
	return 0;
}
