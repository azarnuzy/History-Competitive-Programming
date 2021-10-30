#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int i,j;
    int bar;
    if(n%2==0){
        bar=n/2;
    }
    else{
        bar=n/2+1;
    }
    
    for(i=0; i<bar; i++){
        for(j=0; j<i; j++){
            cout << j*2;
        }
        for(j=0; j<m-(i*2); j++){
            cout << i*2;
        }

        for(j=i-1; j>=0; j--){
            if(m%2 == 1 && i == bar-1) {
                cout <<  j*2;
            }
        }
        
        cout << endl;
    }
    for(i=n/2-1; i>=0; i--){
        for(j=0; j<i; j++){
            cout << j*2;
        }
        for(j=0; j<m-(i*2); j++){
            cout << i*2;
        }
        for(j=i-1; j>=0; j--){
            cout << j*2;
        }
        cout << endl;
    }
}