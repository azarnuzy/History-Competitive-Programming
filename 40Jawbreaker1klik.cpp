#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m,n, b, k;
const ll idx = 25;
ll matriks[idx][idx];
bool visited[idx][idx];
ll jumlah;

void dfs(ll x, ll y, ll c) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(!visited[x][y]) {
            if(matriks[x][y] == c) {
                jumlah++;
                visited[x][y] = true;
                dfs(x+1, y, c);
                dfs(x-1, y, c);
                dfs(x, y+1, c);
                dfs(x, y-1, c);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    cin >> m >> n;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> matriks[i][j];
        }
    }

    jumlah = 0;
    cin >> b >> k;
    dfs(b, k, matriks[b][k]);
    cout << jumlah * (jumlah-1) << endl;
    return 0;
}
