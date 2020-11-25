#include<bits/stdc++.h>
using namespace std;
int cmp(pair<string, int>a, pair<string, int>b)
{
	return a.second > b.second;
}
int main()
{
	int n, i;
	cin >> n;
	string s;
	map<string, int> mp;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		if (mp.count(s))
		{
			mp[s]++;
		}
		else
		{
			mp.insert({s, 1});
		}
	}
	vector<pair<string, int>> v(mp.begin(), mp.end());
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first << endl;
}
