#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int maks=0;
    int x,y;
    int mat[200][200];
    memset(mat, -1, sizeof(mat));
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
            if(mat[i][j]>maks){
                maks=mat[i][j];
                x=i;
                y=j;
            }
        }
    }
    int batas;
    cin >> batas;
    int makstemp,a,b,posx=0,posy=0;
    for(int i=1; i<batas; i++){
        makstemp=0;
        if(mat[x][y+1]>makstemp && mat[x][y+1]!=-1){
            makstemp=mat[x][y+1];
            a=x;
            b=y+1;
        }
        if(mat[x][y-1]>makstemp && mat[x][y-1]!=-1){
            makstemp=mat[x][y-1];
            a=x;
            b=y-1;
        }
        if(mat[x+1][y]>makstemp && mat[x+1][y]!=-1){
            makstemp=mat[x+1][y];
            a=x+1;
            b=y;
        }
        if(mat[x-1][y]>makstemp && mat[x-1][y]!=-1){
            makstemp=mat[x-1][y];
            a=x-1;
            b=y;
        }

        mat[x][y]=-1;
        maks= maks+makstemp;
        x=a;
        y=b;
    }
    cout << maks;
}