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
	int mod = 1e9+7;
    vector<ll> a;
    for(int i=0;i<n;i++)
    {
    	ll c;
        cin>>c;
        a.push_back(c);
    }
	vector<ll> dp(sum+1,0);
	dp[0] = 1;
	for(ll i=1;i<=sum;i++)
	{
		for(ll j=0;j<n;j++)
		{
			if(i - a[j] >= 0)
			{
				dp[i] += dp[i-a[j]];
			}
			dp[i] %= mod;
		}
	}
	cout << dp[sum] << "\n";
	return 0;
}
