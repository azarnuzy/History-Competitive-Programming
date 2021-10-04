#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll i;

    for(i=1; i<=n; i++) {
        if(i == 42) {
            cout << "ERROR" << endl;
            break;
        }

        if(i % 10 == 0) {
           continue;
        }else {
            cout << i << endl;
        }

    }
    return 0;
}
