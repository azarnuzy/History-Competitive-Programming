#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll i = 0,j;
    vector<ll> a;
    ll cek = 0;
    ll sum  = 0;
    for(i=0; i<n; i++) {
        ll temp;       
        cin >> temp;
        a.push_back(temp);
    }
    
    i = 0;
    j = 1;

    for(i=0; i<n - 1; i++) {
 
        if(a[i] < a[i+1]) {
            sum += a[i+1] - a[i];
        }
    }
    
    std::cout << sum << endl;
    return 0;
}