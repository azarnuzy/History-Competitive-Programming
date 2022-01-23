#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (getline(cin, s))
    {
        int i;
        stringstream ss(s);
        string Ssplit;
        while (ss >> Ssplit)
        {
            cout << Ssplit << endl;
        }
    }
    return 0;
}
