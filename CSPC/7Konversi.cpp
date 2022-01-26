#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef long double ld;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    //cin.tie(0);

    string s;
    int a;
    double d;
    ll l;
    long double dd;

    cin >> s >> a >> d >> l;
    cin >> dd;

    cout << dd << endl;
    s = to_string(a);
    cout << "int to string " << stoi(s) << endl;

    s = to_string(d);
    cout << "double to string " << stod(s) << endl;

    s = to_string(l);
    cout << "long long to string " << stoll(s) << endl;

    s = to_string(dd);
    cout << "long double to string " << stold(s) << endl;

    return 0;
}
