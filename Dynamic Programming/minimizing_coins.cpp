#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum;
	cin >> n >> sum;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int dp[n+1][sum+1];
	for(int i=1;i<=n;i++)
	{
		dp[i][0] = 0;
	}
	for(int i=0;i<=sum;i++)
	{
		dp[0][i] = INT_MAX - 1;
	}
	for(int i=1,j=0;j<=sum;j++)
	{
		if(j % a[0] == 0)
		{
			dp[i][j] = j / a[0];
		}
		else
		{
			dp[i][j] = INT_MAX - 1;
		}
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=sum;j++)
		{
			if(j >= a[i-1])
			{
				dp[i][j] = min(1 + dp[i][j-a[i-1]], dp[i-1][j]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	if(dp[n][sum] != INT_MAX - 1)
	{
		cout << dp[n][sum] << "\n";
	}
	else
	{
		cout << "-1" << "\n";
	}
	return 0;
}
