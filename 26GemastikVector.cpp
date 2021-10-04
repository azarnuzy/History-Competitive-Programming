#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a;
    int x;
    int sum = 0;
    while(cin >> x) {
        a.push_back(x);
        sum += x;
    }

    int max = *max_element(a.begin(), a.end());
    
    int b = sum - max;

    if(b >= max) {
        cout << "MUNGKIN" << endl;
    }else {
        cout << "MUSTAHIL" << endl;
    }

    return 0;
}
