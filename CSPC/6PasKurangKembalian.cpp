#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << "Kurang" << endl;
    }
    else if (a > b)
    {
        cout << "Kembalian" << endl;
    }
    else
    {
        cout << "Pas" << endl;
    }
    return 0;
}
