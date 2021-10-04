#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n,m,p;
    cin >> n >> m >> p;
    ll i,j,k;

    ll matriks1[105][105], matriks2[105][105];
    ll matriks3[105][105];

    for(i=1; i<=n; i++) {
        for(j=1; j<=m; j++) {
            cin >> matriks1[i][j];
        }
    }

    for(j=1; j<=m; j++) {
        for(i=1; i<=p; i++) {
            cin >> matriks2[j][i];
        }
    }

    for(i=1; i<=n; i++) {
        for(k=1; k<=p; k++) {
            matriks3[i][k] = 0;
        }
    }

    for(i=1; i<=n; i++) {
        for(j=1; j<=p; j++) {
            for(k=1; k<=m; k++) {
                matriks3[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }

    for(i=1; i<=n; i++) {
        for(k=1; k<=p; k++) {
            cout << matriks3[i][k] << ' ';
        }
        cout << endl;
    }
    return 0;
}
