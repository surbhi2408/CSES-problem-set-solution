#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin >> a[i];
	}
	ll dp[n][n];
	for(ll gap=0;gap<n;gap++)
	{
		for(ll i=0,j=gap;j<n;i++,j++)
		{
			ll x = ((i+2) <= j) ? dp[i+2][j] : 0;
			ll y= ((i+1) <= (j-1)) ? dp[i+1][j-1] : 0;
			ll z = (i <= (j-2)) ? dp[i][j-2] : 0;
			dp[i][j] = max(a[i]+min(x,y), a[j]+min(y,z));
		}
	}
	cout << dp[0][n-1] << "\n";
	return 0;
}
