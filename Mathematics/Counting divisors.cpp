#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000001;
int main()
{
	ll t;
	cin >> t;
	vector<ll> v(mod,0);
	for(ll i=1;i<mod;i++)
	{
		for(int j=i;j<mod;j+=i)
		{
			v[j]++;
		}
	}
	while(t--)
	{
		ll n;
		cin >> n;
		cout << v[n] << "\n";
	}
	return 0;
}
