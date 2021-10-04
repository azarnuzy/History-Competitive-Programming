#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
    ll n, x;
    cin >> n >> x;
    ll i;

    ll arr[n];
    for(i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<pair<ll,ll>> selisih;

    for(i=0; i<n; i++) {
        ll temp = abs(x - arr[i]);
        ll temp1 = arr[i];
        selisih.push_back(make_pair(temp, temp1));
    }

    sort(selisih.begin(), selisih.end());

    ll min = selisih[0].second;
    if(selisih[1].first == selisih[0].first) {
        if(min > selisih[1].second) {
            min = selisih[1].second;
        }
    }

    cout << min << endl;
    return 0;
}
