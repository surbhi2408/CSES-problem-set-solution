#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	ll x,y;
	for(int i=0;i<n;i++)
	{
		cin >> y >> x;
		if(x > y)
		{
			if(x % 2 == 1)
			{
				cout << x * x - y + 1;
			}
			else
			{
				x--;
				cout << x * x + y;
			}
		}
		else
		{
			if(y % 2 == 0)
			{
				cout << y * y - x + 1;
			}
			else
			{
				y--;
				cout << y * y + x;
			}
		}
		cout << "\n";
	}
	return 0;
}
