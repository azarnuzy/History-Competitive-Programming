#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int i,j;
    int bar,kol;
    //Kondisi Baris
    if(n%2==0){
        bar=n/2;
    }
    else{
        bar=n/2+1;
    }
    
    //Kondisi kolom
    if(m%2==0){
        kol=m;
    }
    else{
        kol=m;
    }
    
    for(i=0; i<bar; i++){
        for(j=0; j<i; j++){
            cout << j*2;
        }
        for(j=0; j<kol-(i*2); j++){
            cout << i*2;
        }

        for(j=i-1; j>=0; j--){
            if(m%2==1 && j!=bar-2){
                cout << j*2;
            }
            else if(m%2==0){
                cout << j*2;
            }
            
        }
        
        cout << endl;
    }
    for(i=n/2-1; i>=0; i--){
        for(j=0; j<i; j++){
            cout << j*2;
        }
        for(j=0; j<kol-(i*2); j++){
            cout << i*2;
        }
        for(j=i-1; j>=0; j--){
            if(m%2==1 && j!=bar-2){
                cout << j*2;
            }
            else if(m%2==0){
                cout << j*2;
            }
        }
        cout << endl;
    }
}