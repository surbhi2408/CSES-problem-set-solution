#include<bits/stdc++.h>
using namespace std;
long long int mod = 1000000007;
int main()
{
	int n;
	cin >> n;
	vector<int> dp(n+1,0);
	dp[0] = 1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=6;j++)
		{
			if(i - j >= 0)
			{
				dp[i] += dp[i-j];
				dp[i] = dp[i] % mod;
			}
		}
	}
	cout << dp[n] << "\n";
	return 0;
}
