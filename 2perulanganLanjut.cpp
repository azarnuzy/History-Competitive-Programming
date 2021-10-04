#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    // Menuliskan bilangan prima ke-n
    ll n;
    cin >> n;

    ll count =0, cur = 2;

    while(count < n) {
        bool prima = true;
        for(int i = 2; i <= cur-1; i++) {
            if(cur % i == 0) {
                prima = false;
                break;
            }
        }

        if(prima) {
            cout << cur << " adalah bilangan prima\n";
            count++;
        }
        cur++;
    }
    return 0;
}
