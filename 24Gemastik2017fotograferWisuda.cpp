#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int t;
    cin >> t;
    ll a,b,k;
    vector<string>arrA, arrB, res;
    ll i,j;
    ll count = 0;
    ll cek1 = 0, cek2 = 0;

    for(i=0; i<t; i++) {
        cin >> a >> b >> k;
        arrA.clear();
        arrB.clear();
        if(a == 0 && b < k ) {
            cout << "mustahil" << endl;
        }else {
            if(a % 2 == 0 && a>=2) {
                for(j=0; j<a/2; j++) {
                    arrA.push_back("LL");
                }
            }else if(a % 2 == 1 && a>=2) {
                for(j=0; j<a/2; j++) {
                    arrA.push_back("LL");
                }
                arrA.push_back("L");
            }else if(a == 1) {
                arrA.push_back("L");
            }

            if(b >= k) {
                ll m =0;
                while(b > 0) {
                    string temp = "";

                    if(k > b && m != 0) {
                        k = b;
                    }
                    m++;
                    for(j=0; j<k; j++) {
                        temp += "P";
                    }
                    arrB.push_back(temp);
                    b -=k;
                }
            }else if(b < k) {
                string temp = "";
                for(j=0; j<b; j++) {
                    temp += "P";
                }
                arrB.push_back(temp);
            }
            
            ll len = max(arrA.size(), arrB.size());
            
            
            /* for(auto itr = arrA.begin(); itr != arrA.end(); itr++) {
                cout << *itr << ' ';
            }
            cout << endl;

            for(auto itr = arrB.begin(); itr != arrB.end(); itr++) {
                cout << *itr << ' ';
            }
            cout << endl; */
        }
    }
        
  return 0;
}