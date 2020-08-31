#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin >> n;
	string str = "";
	if(n <= 3 && n > 1)
	{
		cout << "NO SOLUTION" << "\n";
	}
	for(int i=1;i<=n;i++)
	{
		if(i % 2 == 0)
		{
			cout << i << " ";
		}
		else
		{
			str += to_string(i) + " ";
		}
	}
	cout << str;
	return 0;
}
