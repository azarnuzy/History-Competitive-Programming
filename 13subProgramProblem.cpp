#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    ll n, a[1005], b[1005], t, x, y;
    char p, q;
    cin >> n;
    ll i,j;
    for(i=1; i<=n; i++) {
        cin >> a[i];
    }

    for(i=1; i<=n; i++) {
        cin >> b[i];
    }

    cin >> t;

    for(i=0; i<t; i++) {
        cin >> p >> x >> q >> y;
        if(p == 'A' && q == 'B') {
            swap(a[x], b[y]);
        }else if(p == 'B' && q == 'A'){
            swap(b[x], a[y]);
        }else if(p == 'A' && q == 'A') {
            swap(a[x], a[y]);
        }else{
            swap(b[x], b[y]);
        }
    }

    for(i=1; i<=n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;

    for(i=1; i<=n; i++) {
        cout << b[i] << ' ';
    }
    cout << endl;
    return 0;
}
