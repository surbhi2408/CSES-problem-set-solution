#include<bits/stdc++.h>
using namespace std;
long long int mod = 1e9+7;
int main()
{
	int n,x;
	cin >> n >> x;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	int dp[n+1][x+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=x;j++)
		{
			if(i == 1)
			{
				if(a[i] == 0 || a[i] == j)
				{
					dp[i][j] = 1;
				}
				else
				{
					dp[i][j] = 0;
				}
			}
			else
			{
				if(a[i] == 0 || a[i] == j)
				{
					dp[i][j] = ((dp[i-1][j-1] + dp[i-1][j]) % mod + dp[i-1][j+1]) % mod;
				}
				else
				{
					dp[i][j] = 0;
				}
			}
		}
	}
	int res = 0;
	for(int j=1;j<=x;j++)
	{
		res += dp[n][j];
		res %= mod;
	}
	cout << res << "\n";
	return 0;
}
