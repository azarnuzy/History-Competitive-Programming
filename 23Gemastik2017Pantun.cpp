#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n;
    cin >> n;
    ll count1 = 0;
    ll count2 = 0;

    int i,j;

    for(i=0; i<n; i++){
        ll temp;
        cin >> temp;
        count1 += temp;
    }

    for(i=0; i<n; i++){
        ll temp;
        cin >> temp;
        count2 += (temp * n) + count1;
    }
    
    cout << count2 << endl;
  return 0;
}