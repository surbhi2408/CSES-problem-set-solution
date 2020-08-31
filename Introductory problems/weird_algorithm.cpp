#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    //vector<ll> v;
    ll val = n;
    cout << n << " ";
    while(val != 1)
    {
        if(val % 2 != 0)
        {
            val = val * 3 + 1;
            //v.push_back(val);
            cout << val << " ";
        }
        else if(val % 2 == 0)
        {
            val = val / 2;
            //v.push_back(val);
            cout << val << " ";
        }
        if(val == 1)
        {
        	break;
		}
    }
    return 0;
}
