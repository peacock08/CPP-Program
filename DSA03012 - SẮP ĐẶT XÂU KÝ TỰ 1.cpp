#include <bits/stdc++.h>
#define ll long long
const long int N = 1e6 + 5;
const long int mod = 1e9 + 7;
using namespace std;

string s;
void dat()
{
	int dem[200] = {0};
	cin >> s;
	int res = 0;
	for (int i = 0; i < s.length(); i++)
	{
		dem[s[i]]++;
		res = max(res, dem[s[i]]);
	}
	if (s.length() % 2 == 0 && res <= s.length() - res)
		cout << 1 << endl;
	else if (s.length() % 2 == 1 && res <= s.length() / 2 + 1)
		cout << 1 << endl;
	else
		cout << -1 << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		dat();
	}
	return 0;
}
