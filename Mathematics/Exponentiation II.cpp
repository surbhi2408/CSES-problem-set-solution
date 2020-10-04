#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll MOD = 1000000007;
ll func(ll a,ll b,ll mod)
{
	ll res = 1;
	while(b > 0)
	{
		if(b & 1)
			res = (res * a) % mod;
		a = (a * a) % mod;
		b = b >> 1;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
		ll a,b,c;
		cin >> a >> b >> c;
		ll ans = func(b,c,MOD-1);
		cout << func(a,ans,MOD) << "\n";
	}
	return 0;
}
