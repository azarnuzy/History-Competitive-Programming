#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    ll s = round(sqrt(n));

    if(s * s != n) {
        cout << "lampu mati\n";
    }else {
        cout << "lampu menyala\n";
    }
    return 0;
}
