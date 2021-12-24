#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string x;
    while (cin >> x)
    {
        vector<string> a;
        int count = 0;
        int i = 0;
        for (i = 0; i < x.length() - 1; i++)
        {
            string b = "";
            b += x[i];
            b += x[i + 1];

            auto it = find(a.begin(), a.end(), b);
            if (it == a.end())
            {
                count++;
                a.push_back(b);
            }
        }
        cout << count << endl;
    }
    return 0;
}
