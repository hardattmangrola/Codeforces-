#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define vi vector<int>
 
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main()
{
    fast_io();
    long long n, a;
    cin >> n;
    if (n % 2 == 0)
        a = n / 2;
    else
        a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}
