#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> a >> b;
        vector<int> stacked;
        for (int j = 0; j < n; j++) {
            int num = 0;
            cin >> num;
            stacked.push_back(num);
        }
        int idx = (n - ((a*b)%n)) >= n ? 0 : (n - ((a*b)%n));
        cout << stacked[idx] << endl;
    }
    return 0;
}