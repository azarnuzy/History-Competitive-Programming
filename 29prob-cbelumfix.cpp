#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,q;
  cin >> n >> m >> q;
  int i,j,k;
  int b[n][m];
  for(i=1; i<=n; i++){
      for(j=1; j<=m; j++){
          cin >> b[i][j];
      }
  }

  int x1,y1,x2,y2,res;
  for(i=0; i<q; i++){
    res=0;  
    cin >> x1 >> y1 >> x2 >> y2;
    for(j=x1; j<=x2; j++){
        for(k=y1; k<=y2; k++){
            res=res+b[j][k];
        }
    }
    cout << res << endl;
  }
}