#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;

    ll n,a,b;
    
    ll i,j;
    vector <ll> x;
    for(i=0; i<t; i++) {
        cin >> n >> a >> b;
        for(j=0; j<n; j++) {
            ll temp;
            cin >> temp;
            x.push_back(temp);
        }

        vector<ll>::iterator y,z, cek;

        cek = x.begin() + a;
        ll cek1 = *cek;
        bool check = true;
        j = 0;
        while(check && j<b) {
            y = x.begin() + a;
            ll y1 = *y;
            if(j!=0 && cek1 != y1) {
                x.push_back(*y);
                x.erase(y);
            }else {
                if(j == 0) {
                    x.push_back(*y);
                    x.erase(y);
                }else {
                    check = false;
                }
            }
            j++;
        }
        cout << j << endl;
        z = x.end();
        cout << *z << endl;
    }

    return 0;
}
