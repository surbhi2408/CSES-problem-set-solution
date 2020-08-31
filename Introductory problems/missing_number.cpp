#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	for(int i=1;i<=n;i++)
	{
		sum += i;
	}
	int res = 0;
	int c;
	for(int i=0;i<n-1;i++)
	{
		cin >> c;
		res += c;
	}
	cout << (sum - res) << "\n";
	return 0;
}
