#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    ll i,j,k;
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=n-i-2; j>=0; j--) {
            cout << " ";
        }

        for(j = 0; j<i+1; j++) {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}