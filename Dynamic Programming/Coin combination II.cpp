#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,sum;
	cin >> n >> sum;
	vector<ll> a;
	int mod = 1e9+7;
	for(int i=0;i<n;i++)
    {
    	ll c;
        cin >> c;
        a.push_back(c);
    }
	vector<ll> dp(sum+1,0);
	dp[0] = 1;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<=sum;j++)
		{
			if(j - a[i] >= 0)
			{
				dp[j] += dp[j - a[i]];
			}
			dp[j] %= mod;
		}
	}
	cout << dp[sum] << "\n";
	return 0;
}
