#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
    ll n;
    
    cin >> n;
    // mencari bilangan prima solusi 1
    ll i;
    ll cek = 0;
    for(i=2; i<n; i++) {
        if(n % i == 0 ) {
            cout << n << " bukan bilangan prima";
            cek = 1;
            break;
        }
    }

    if(cek == 0) {
        cout << n << " adalah bilangan prima";
    }

    // mencari bilangan prima solusi 2

    return 0;
}
