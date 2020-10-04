#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e6+1;
vector<int> freq(mod,0);
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll x;
		cin >> x;
		freq[x]++;
	}
	for(ll i=mod;i>=0;i--)
	{
		ll count = 0;
		for(ll j=i;j<mod;j+=i)
		{
			count += freq[j];
		}
		if(count > 1)
		{
			cout << i << "\n";
			break;
		}
	}
	return 0;
}
