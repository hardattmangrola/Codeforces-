#include <bits/stdc++.h>
using namespace std;
void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main()
{
	fast_io();
	string s;
	cin >> s;
	string t;
	cin >> t;
	reverse(s.begin(), s.end());
	if (s == t)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}
