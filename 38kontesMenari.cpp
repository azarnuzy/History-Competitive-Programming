#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll r1, r, sum, bonus, y, j, limit, idx = 0;
ll n, a[20], tot=0;
string s[20];
bool visited[20];
const ll nn = 1e6;
ll ans[nn];

void brute(int r1, string t) {
    if(r1 >= r) {
        printf("%ld ", sum);
        idx++;
        cout << idx << endl;
        ans[idx] = sum;
        return;
    }
    for(int i=1; i<=n; i++) {
        if(!visited[i]) {
            visited[i] = true;
            if(t=="B") {
                sum += a[i] + bonus;
                brute(r1+1, s[i] );
                sum -= a[i] + bonus;
            }else if(t == "P") {
                sum+=a[i] * 2 + bonus;
                brute(r1+1, s[i]);
                sum-=a[i] * 2 + bonus;
            }else if(t == "L") {
                sum += bonus + a[i]/2;
                brute(r1+1, s[i]);
                sum -= bonus + a[i]/2;
            }else if(t == "Y") {
                bonus = y;
                sum += a[i] + bonus;
                brute(r1+1, s[i]);
                sum -= a[i] + bonus;
                bonus = 0;
            }
            visited[i] = false;
        }
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string input;
    cin >> input >> input;
    cin >> n >> r >> y >> j;
    for(ll i = 1; i<=n; i++) {
        cin >> a[i] >> s[i];
    }
    
    memset(visited, false, sizeof(visited));
    bonus = 0; 
    sum = 0;
    tot = 0;
    
    brute(0, "B");
    sort(ans+1, ans+idx+1);
    while(j--) {
        cin >> limit;
        ll l = 1;
        ll r = idx;
        ll tot = -1;
        while(l<=r) {
            ll mid = (l + r ) / 2;
            if(ans[mid] > limit) {
                tot = mid;
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        if(tot == -1) {
            cout << "0" << endl;
        }else {
            cout << idx - tot + 1 << endl;
        }
    }
    return 0;
}
