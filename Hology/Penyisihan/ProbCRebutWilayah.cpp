#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m,n;
const ll idx = 25;
char matriks[idx][idx];
bool visited[idx][idx];
ll jumlah;
ll hitung;

void dfs(char x, char y, char c) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(!visited[x][y]) {
            if(matriks[x][y] == c) {
                visited[x][y] = true;
                if(matriks[x+1][y] == '*' || matriks[x+1][y] == '#') {
                    hitung++;
                }
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
    hitung = 0;
    ll b,k;
    jumlah = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(matriks[i][j] == 'h') {
                jumlah++;
            }
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(visited[i][j] == 0 && matriks[i][j] == '*') {
                hitung = 0;
                dfs(i, j, '*');
            }
        }
    }
    return 0;
}
