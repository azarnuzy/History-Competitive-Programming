#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m,n;
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
    ll difnum[10000];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> matriks[i][j];
        }
    }
    ll max = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(visited[i][j] == 0) {
                jumlah = 0;
                dfs(i, j, matriks[i][j]);
                if(max < jumlah) {
                    max = jumlah;
                }
            }
        }
    }
    cout << max * (max-1) << endl;
    return 0;
}
