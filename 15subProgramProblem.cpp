#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll itr=0;

void SieveOfEratosthenes(ll n, ll primeNum[])
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++){
        if (prime[p]) {
            primeNum[itr++] = p;
        }      
    }    
}

void getFactor(ll n, ll primeNum[]) {
    ll i,j;
    ll num[n];
    ll count = 0;
    for(i=0; i<n; i++) {
        num[i] = 0;
    }
    ll len = n, len2 = 0;
    i=0;
    while(i < itr && n > 0) {
        if(n % primeNum[i] == 0){  
            n /= primeNum[i];
            num[primeNum[i]]++;
            count++;
        }else{
            i++;
        }
    }

    for(i=0; i<len; i++) {
        if(num[i] > 0) {
            len2++;
        }
    }

    j = 0;
    for(i=0; i<len; i++) {
        if(num[i] > 1) {
            cout << i << '^' << num[i];
            j++;
        }else if(num[i] == 1) {
            cout << i;
            j++;
        }

        if(j < len2 && num[i] >= 1) {
            cout << ' ' << 'x' << ' ';
        }
    }

    if(count == 1) {
        cout << len;
    }
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;

    ll primeNum[n];

    SieveOfEratosthenes(n, primeNum);
    getFactor(n, primeNum);
    cout << endl;
    return 0;
}