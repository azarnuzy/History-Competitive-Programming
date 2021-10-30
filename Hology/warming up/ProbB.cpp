#include <bits/stdc++.h>

using namespace std;

int dis(int x1, int y1, int z1, int x2, int y2, int z2){
    int res;
    res = sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
    return res;
}

int main(){
    int i,j,x[8],y[8],z[8];
    for(i=0; i<8; i++){
        cin >> x[i] >> y[i] >> z[i];
    }
    
    int max=0;
    
    for(i=0; i<8; i++){
        for(j=i+1; j<8; j++){
            if(dis(x[j],y[j],z[j],x[i],y[i],z[i])>max){
                max=dis(x[j],y[j],z[j],x[i],y[i],z[i]);
            }
        }
    }
    
    cout << max;
}