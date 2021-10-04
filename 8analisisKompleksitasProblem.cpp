#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll i,m, count = 0, j;

    for(i=0; i<n; i++) {
        cin >> m;
        bool prima = true;
        count = 0;
        for(j=2; j * j <= m; j++) {
            if(m % j == 0) {
                count++;
                if(count > 1) {
                    prima = false;
                    break;
                }
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
