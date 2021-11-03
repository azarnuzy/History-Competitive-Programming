#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll m, n;
vector<ll> num;
vector<ll> res;

void permute(string str)
{
    sort(str.begin(), str.end());
    
    do {
        ll tempCount = 0;
       for(ll i=0; i<str.length(); i++) {
           ll idx = str[i] - 48;
           tempCount += idx;
           res.push_back(num[tempCount]);
       }
        
        ll itr = 0;
        ll hitung = 0;
        ll tempIdx = 0;
        ll cek = 0;
        for(auto i=res.begin(); i!=res.end()-1; i++) {
            hitung = 0;
            for(ll j=tempIdx; j<num.size(); j++) {
                if(*i+1 > num[j]) {
                    hitung++;
                }
            }
            tempIdx += str[itr] - 48;
            if(hitung-1 == str[itr] - 48) {
                cout << *i+1 << ' ';
                cek = 1;
            }
            itr++;            
        }
        cout << endl;
        if(cek == 1) {
            return;
        }
        res.clear();
    } while (next_permutation(str.begin(), str.end()));
}

int main(int argc, char const *argv[])
{
     cin >> n;
    for(ll i=0; i<n; i++) {
        ll temp;
        cin >> temp;
        num.push_back(temp);
    }
    sort(num.begin(), num.end());
    cin >> m;
    ll count = n/m;
    ll modulo = n%m;
    string str = "";
    ll tempNum[10000];
    for(ll i=0; i<modulo; i++) {
        tempNum[i] = count + 1;
    }

    for(ll i=modulo; i<m; i++) {
        tempNum[i] = count;
    }

    for(ll i=0; i<m; i++) {
        str += to_string(tempNum[i]);
    }
    permute(str);
    
    return 0;
}
