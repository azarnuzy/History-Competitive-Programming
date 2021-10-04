#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n,i;
    cin >> n;
    ll arr[1001];
    

    for(i=0; i<1001; i++) {
        arr[i] = 0;
    }

    ll m;
    for(i=0; i<n; i++) {
        cin >> m;
        arr[m]++;
    }

    ll count = 0, modus;
    for(i=0; i<1001; i++) {
        if(count <= arr[i]) {
            count = arr[i];
            modus = i;
        }
    }

    cout << modus << endl;
    return 0;
}
