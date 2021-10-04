#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	bool prime[1000001];
	memset(prime, true, sizeof(prime));

	int i = 1;
	int list[77900];

	for(int j = 2; j<= 1e6; j++){
		if(prime[j]){
			list[i] = j;
			i++;
			if(j*j <= 1e6){
				for(int k = 2 * j; k < 1e6; k += j){
					prime[k] = false;
				}
			}
		}
	}

	int a,b;

	cin >> a;

	for(int i = 0; i <a; i++){
		cin >> b;
		cout << list[b] << "\n";
	}
	return 0;
}