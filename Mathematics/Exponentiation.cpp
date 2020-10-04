#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    while(n--)
    {
        ll a,b;
        cin >> a >> b;
        ll res = 1;
        while(b > 0)
        {
            if(b & 1)
            {
                res = (res * a) % mod;
            }
            a = (a * a) % mod;
            b = b >> 1;
        }
        cout << res << "\n";
    }
    return 0;
}
