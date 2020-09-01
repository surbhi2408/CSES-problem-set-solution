#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int longestSequence(ll a[],ll n)
{
	if(n == 0)
	{
		return 0;
	}
	vector<ll> tail(n,0);
	int len = 1;
	tail[0] = a[0];
	for(int i=1;i<n;i++)
	{
		auto b = tail.begin(),e = tail.begin() + len;
		auto it = lower_bound(b,e,a[i]);
		if(it == tail.begin() + len)
		{
			tail[len++] = a[i];
		}
		else
		{
			*it = a[i];
		}
	}
	return len;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << longestSequence(a,n) << "\n";
	return 0;
}
