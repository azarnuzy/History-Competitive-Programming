#include <bits/stdc++.h>
using namespace std;
#define ll long long

int absolute(ll a, ll b,ll &x) {
    ll temp = x;
    x = abs(a * temp + b);
}

int main(int argc, char const *argv[])
{
    ll a,b,k,x;
    cin >> a >> b >> k >> x;

    ll i;
    for(i=0; i<k; i++) {
        absolute(a,b,x);
    }

    cout << x << endl;
    return 0;
}
