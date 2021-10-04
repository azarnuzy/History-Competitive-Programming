#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n, m;
    cin >> n;

    ll i,j;

    for(i=0; i<n; i++) {
        cin >> m;
        bool prima = true;
        if(m == 1) {
            prima = false;
        }
        for(j=2; j * j<=m; j++) {
            if(m % j == 0) {
                prima = false;
                break;
            }
        }

        if(prima) {
            cout << "YA" << endl;
        }else {
            cout << "BUKAN" << endl;
        }
    }
    
    return 0;
}
