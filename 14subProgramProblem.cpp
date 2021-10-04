#include <bits/stdc++.h>
using namespace std;
#define ll long long

int reverse(ll x) {
    ll temp = x;
    ll ret = 0;

    while(temp > 0) {
        ret = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

void avoidZero(ll &x) {
    while(x % 10 == 0) {
        x /= 10;
    }
}

int main(int argc, char const *argv[])
{
    ll a,b;
    cin >> a >> b;

    cout << reverse(reverse(a) + reverse(b)) << endl;

    return 0;
}
