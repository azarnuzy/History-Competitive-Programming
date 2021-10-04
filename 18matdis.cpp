#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    }else {
        ll temp = b;
        b = a % b;
        return gcd(temp, b);
    }
}

int main(int argc, char const *argv[])
{
    ll a,b,c,d;

    cin >> a >> b >> c >> d;

    ll pembilang, penyebut;
    penyebut = b * d;
    pembilang = a * d + c * b;

    ll fpb = gcd(pembilang, penyebut);
    cout << pembilang/fpb << ' ' << penyebut/fpb << endl;
    return 0;
}
