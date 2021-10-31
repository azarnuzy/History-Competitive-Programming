#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll n;

int main(int argc, char const *argv[])
{
    cin >> n;
    if(n == 0) {
        cout << 1 << ' ' << 2 << ' ' << 3 << ' ' << 4 << endl;
    }else if((n-5) % 6 == 0 ) {
        cout << -1 << endl;
    }else{
        ll a = n / 6;
        if(a == 0) {
            a = n;
        }else{
            n -= a;
        }
        ll res = 5 * n;
        cout << res << ' ' << res+1 << ' ' << res+2 << ' ' << res+3 << ' ' << res+4 << endl;
    }
    return 0;
}
