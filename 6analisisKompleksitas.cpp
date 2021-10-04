#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll i,c = 0, r;
    ll temp;
    for(i=2; i * i <= n; i++) {
        if(n % i == 0) {
            c = i;
            r = n / i;
        }
    }
    cout << c << " " << r << endl;
    return 0;
}
