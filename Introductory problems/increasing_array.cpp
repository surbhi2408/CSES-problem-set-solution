#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,pre,in,steps = 0;
	cin >> n >> pre;
	while(--n > 0)
	{
		cin >> in;
		if(pre > in)
		{
			steps += pre - in;
		}
		else
		{
			pre = in;
		}
	}
	cout << steps << "\n";
	return 0;
}
