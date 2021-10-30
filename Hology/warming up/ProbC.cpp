#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;
    cin >> n;
    int res=0;
    
	for(int i=0; i<n; i++){
	    cin >> m;
	    res = res + (m-1);
	}
	cout << res;
}