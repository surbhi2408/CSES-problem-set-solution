#include<bits/stdc++.h>
using namespace std;
int add(int coins[],int n)
{
	int s = 0;
	for(int i=0;i<n;i++)
	{
		s += coins[i];
	}
	return s;
}
int main()
{
	int n;
	cin >> n;
	int coins[n];
	for(int i=0;i<n;i++)
	{
		cin >> coins[i];
	}
	int sum = add(coins,n);
	int dp[sum+1];
	memset(dp,-1,sizeof(dp));
	dp[0] = 1;
	for(int i=0;i<n;i++)
	{
		for(int j=sum-coins[i];j>=0;j--)
		{
			if(dp[j] != -1)
			{
				dp[j+coins[i]] = 1;
			}
		}
	}
	vector<int> v;
	for(int i=1;i<=sum;i++)
	{
		if(dp[i] != -1)
		{
			v.push_back(i);
		}
	}
	cout << v.size() << "\n";
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
