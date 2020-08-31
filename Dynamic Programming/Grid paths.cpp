#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll mod = 1e9+7;
	string s;
	vector<vector<long long int>> dp(n+1,vector<long long int> (n+1,0));
	dp[0][0] = 1;
	for(ll i=0;i<n;i++)
	{
		cin >> s;
		for(ll j=0;j<n;j++)
		{
			if(s[j] != '*')
			{
				if(i > 0)
				{
					dp[i][j] += dp[i-1][j];
					dp[i][j] %= mod;
				}
				if(j > 0)
				{
					dp[i][j] += dp[i][j-1];
					dp[i][j] %= mod;
				}
			}
			else
			{
				dp[i][j] = 0;
			}
		}
	}
	if(n > 0)
	{
		cout << dp[n-1][n-1] % mod << "\n";
	}
	else
	{
		cout << "-1" << "\n";
	}
}
