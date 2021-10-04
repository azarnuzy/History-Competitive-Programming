#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll i,j;

    ll matriks[105][105];

    for(i=1; i<=n+2; i++) {
        for(j=1; j<=m+2; j++) {
            matriks[i][j] = 1;
        }
    }

    for(i=2; i<n+2; i++) {
        for(j=2; j<m+2; j++) {
            cin >> matriks[i][j];
        }
    }
    
    i = 2, j =2;
    bool cek = true;
    ll x,y;
    ll temp = 1;
    while(j < m+2 && cek ) {
        i = 2;
        while(i < n+2 && cek) {
            temp = matriks[i-1][j] * matriks[i+1][j] * matriks[i][j+1] * matriks[i][j-1];
            if(temp == k ){
                cek = false;
                x = i - 1;
                y = j - 1;
            }
            i++;
        }
        j++;
    }

    if(cek) {
        cout << 0 << ' ' << 0 << endl;
    }else {
        cout << x << ' ' << y << endl;
    }
    return 0;
}
