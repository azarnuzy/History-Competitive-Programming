#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n, i,j,k;
    cin >> n;
    k = 0;
    for(i=0; i<n; i++) {
        for(j=0; j<i+1; j++) {
            if(k == 10) {
                k = 0;
            }
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}
