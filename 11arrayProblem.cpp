#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n,m;
    cin >> n >> m;

    ll i,j;
    ll matriks[105][105];
    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            cin >> matriks[i][j];
        }
    }

    for(i=1; i<=m; i++) {
        for(j=n; j>=1; j--) {
            cout << matriks[j][i] << ' ';
        }
        cout << endl;
    }    
    return 0;
}

