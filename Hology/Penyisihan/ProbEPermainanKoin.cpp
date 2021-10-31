#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m,x;
ll a[100][100];
const ll idx = 100;
bool visited[idx][idx];
ll jumlah;

void dfs(ll x, ll y, ll c, ll count) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(c <= count) {
            ll row,col;
            ll temp = -1;
            if(temp < a[x+1][y] && !visited[x][y] && (x+1) < m) {
                temp = a[x+1][y];
                row = x+1;
                col = y;
            }
            if(temp < a[x-1][y] && !visited[x][y] && (x-1) >= 0) {
                // cout << x-1 << endl;
                temp = a[x-1][y];
                row = x-1;
                col = y;
                cout << 's' << endl;
            }
            if(temp < a[x][y+1] && !visited[x][y] && (y+1) < n) {
                temp = a[x][y+1];
                row = x;
                col = y+1;
            }
            if(temp < a[x][y-1] && !visited[x][y] && (y-1) >= 0 ) {
                temp = a[x][y-1];
                row = x;
                col = y-1;
            }
            cout << row << ' ' << col << endl;
            jumlah += temp;
            visited[row][col] = true;
            dfs(row, col, c+1, count);
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> n >> m;
    ll i,j;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }

    ll b,k;
    ll max = 0;
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(max < a[i][j]) {
                max = a[i][j];
                b = i;
                k = j;
            }
        }
    }
    cin >> x;
    jumlah = 0;
    dfs(b, k, 0, x);
    cout << jumlah + a[b][k] << endl;
    return 0;
}
