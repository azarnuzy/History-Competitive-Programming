// Problem https://tlx.toki.id/courses/competitive/chapters/04/problems/G
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int m,n;
const ll idx = 25;
char matriks[idx][idx];
char matriksCopy[idx][idx];
bool visited[idx][idx];
bool visited2[idx][idx];
ll jumlah;

void dfs(char x, char y, char c, int mode) {
    if(x>=0 && x<m && y>=0 && y < n) {
        if(!visited[x][y]) {
            if(matriks[x][y] == c) {
                jumlah++;
                if(mode == 1) {
                    matriks[x][y] = '.';
                }
                visited[x][y] = true;
                dfs(x+1, y, c, mode);
                dfs(x-1, y, c, mode);
                dfs(x, y+1, c, mode);
                dfs(x, y-1, c, mode);
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

void copyMatriks(int mode) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(mode == 1) {
                matriksCopy[i][j] = matriks[i][j];
            }else {
                matriks[i][j] = matriksCopy[i][j];
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

    copyMatriks(1);

    ll max = 0, max2 = 0;
    ll res = 0;
    ll sum = 0;
    ll col, row;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(visited[i][j] == 0) {
                jumlah = 0;
                dfs(i, j, matriks[i][j], 0);
                max = jumlah;
                memset(visited, 0, sizeof visited);
                dfs(i, j, matriks[i][j], 1);

                for(int k=1; k<m; k++) {
                    for(int l=0;  l<n; l++) {
                        if(matriks[k][l] == '.') {
                            swapUp(k, l);
                        }
                    }
                }

                max2 = 0;
                memset(visited, 0, sizeof visited);
                for(int k=0; k<m; k++) {
                    for(int l=0; l<n; l++) {
                        if(matriks[k][l] != '.') {
                            jumlah = 0;
                            dfs(k, l, matriks[k][l], 0);
                            if(max2 < jumlah) {
                                max2 = jumlah;
                            }
                        }
                    }
                }
                memset(visited, 0, sizeof visited);
                copyMatriks(0);
                sum = (max * (max-1)) + ((max2) * (max2 -1));
                if(res < sum) {
                    res = sum;
                }

            }
        }
    }

    cout << res << endl; 

    return 0;
}
