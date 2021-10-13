// Meretas Password Wifi
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll I = 1e5 + 5;
ll a[I], b[I];

int main(int argc, char const *argv[])
{
    ll n, q, i;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    cin >> q;

    while(q--) {
        ll l,r, t;
        cin >> l >> r >> t;
        --l;

        ll res = 0;
        for(i = l; i < r; i++)   {
            res = max(res, b[i] * t + a[i]);
        }  

        cout << res << endl;
    }
    return 0;   
}
