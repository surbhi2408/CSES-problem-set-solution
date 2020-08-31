#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n;
	cin >> n;
	vector<ll> dp(n+1,INT_MAX);
	dp[0] = 0;
	for(ll i=0;i<=n;i++)
	{
		for(char s : to_string(i))
		{
			dp[i] = min(dp[i],dp[i-(s-'0')]+1);
		}
	}
	cout << dp[n] << "\n";
	return 0;
}
