#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int n = s.length();
	int cnt = 1,maxl = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == s[i+1])
		{
			cnt++;
		}
		else if(s[i] != s[i+1])
		{
			cnt = 1;
		}
		if(maxl < cnt)
		{
			maxl = cnt;
		}
	}
	cout << maxl << "\n";
	return 0;
}
