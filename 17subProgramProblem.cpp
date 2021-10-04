#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,d;
ll t[100000];
ll itr = 0;

ll getT(ll x[], ll y[]) {
    ll i,j;
    ll a,b;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
           a = pow(abs(x[i] - x[j]), d);
           b = pow(abs(y[i] - y[j]), d); 
           t[itr++] = a + b;
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> d;
    ll x[n], y[n];
    ll i,j;

    for(i=0; i<n; i++) {
        cin >> x[i] >> y[i];
    }
    
    getT(x, y);
    ll max = t[0];
    ll min = t[0];

    for(i=0; i<itr; i++) {
        if(max < t[i]) {
            max = t[i];
        }
        if(min > t[i]) {
            min = t[i];
        }
    }

    cout << min << ' ' << max << endl;
    return 0;
}
