#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll funct(ll a,ll b) {
    ll i, j;
    vector <ll> num;

    for(i=0; i<=b; i++) {
        num.push_back(1);
    }

    for(i=2; i<=a; i++) {
        if(num[i] == 1) {
            for(j=i; j<=b; j += i) {
                num[j] = 0;
            }
        }
    }

    ll total = 0;
    for(i=2; i<=b; i++) {
        if(num[i]) {
            total += 1;
        }
    }

    return total;
}
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll i;
    ll a,b;

    for(i=0; i<n; i++) {
        cin >> a >> b;
        cout << funct(a,b) << endl;
    }
    return 0;
}
