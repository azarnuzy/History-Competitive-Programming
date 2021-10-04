#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findGcd(ll a, ll b) {
    if(a % b == 0) {
        return b;
    }else {
        ll temp = b;
        b = a % b;
        findGcd(temp, b);
    }
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll i;
    ll d;
    ll lcm = 1, gcd;
    for(i=0; i<n; i++) {
        cin >> d;
        gcd = findGcd(lcm, d);
        lcm = lcm * d / gcd;
    }

    cout << lcm << endl;
    return 0;
}
