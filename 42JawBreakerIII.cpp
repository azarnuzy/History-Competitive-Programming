#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m,n;
const ll idx = 25;
char matriks[idx][idx];
bool visited[idx][idx];
ll jumlah;

void dfs(char x, char y, char c) {
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

void todot(char x, char y, char c) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(!visited[x][y]) {
            if(matriks[x][y] == c) {
                jumlah++;
                matriks[x][y] = '.';
                visited[x][y] = true;
                todot(x+1, y, c);
                todot(x-1, y, c);
                todot(x, y+1, c);
                todot(x, y-1, c);
            }
        }
    }
}

void swapUp(char x, char y) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(x >= 1 && matriks[x][y] == '.') {
            char temp = matriks[x][y];
            matriks[x][y] = matriks[x-1][y];
            matriks[x-1][y] = temp;  
        }
        swapUp(x-1, y);
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
    ll b,k;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(visited[i][j] == 0) {
                jumlah = 0;
                dfs(i, j, matriks[i][j]);
                if(max < jumlah) {
                    max = jumlah;
                    b = i;
                    k = j;
                }
            }
        }
    }


    memset(visited, 0, sizeof visited);

    todot(b, k, matriks[b][k]);

    memset(visited, 0, sizeof visited);

    for(int i=1; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(matriks[i][j] == '.') {
                swapUp(i, j);
            }
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << matriks[i][j] << ' ';
        }
        cout << endl;
    }


    return 0;
}
