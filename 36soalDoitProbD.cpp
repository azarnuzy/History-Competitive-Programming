#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n,m, result;
    cin >> n >> m;

    result = 0;
    while(n > 0) {
        result++;
        if(n >= m) {
            n -=  m;
        }else {
            n = 0;
        }
    }

    cout << result << endl;
    return 0;
}
