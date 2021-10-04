#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A;
    int x;

    while(cin >> x) {
        A.push_back(x);
    }

    int n = A.size()/2;
    int a = 0, b=0, c=0;
    int i, j;
    for(i=0; i<n; i++ ) {
        for(j=n; j< n+ n; j++) {
            if(A[i] > A[j]) {
                a += 1;
            }else if(A[i] < A[j]) {
                b += 1;
            }else {
                c += 1;
            }
        }
    }   
    
    if(a == b) {
        cout << "Imbang" << endl;
    }else if(a < b) {
        cout << "Vijay menang dengan peluang " <<  b / __gcd(b, n * n) << "/" << n * n / __gcd(b, n * n) << endl;
    }else{
        cout << "Adhi menang dengan peluang " << a/ __gcd(a, n *n) << "/" << n * n / __gcd(a, n* n) << endl;
    }

    return 0;
}
