#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    vector<int> A;
    int x;
    ll total = 0;
    while(cin >> x) {
        A.push_back(x);
        total += x;
    }

    cout << total << endl;
    return 0;
}
