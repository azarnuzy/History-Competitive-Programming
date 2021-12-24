#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    int i;
    for (i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }

    i = 0;
    int j = 0;
    int cek = 0;
    vector<int>::iterator it;
    it = arr.begin();
    while (arr.size() != 0)
    {
        if (i == arr.size())
        {
            i = 0;
        }

        if (j == m - 1)
        {
            cek = arr[i];
            arr.erase(it + i);
            i--;
            j = -1;
        }
        j++;

        i++;
    }

    cout << cek << endl;
    return 0;
}
