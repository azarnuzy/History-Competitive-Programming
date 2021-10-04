/* Link Problem https://tlx.toki.id/courses/competitive/chapters/04/problems/B */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define REP(i, a, b) for (int i = a; i <= b; i++)

ll t, n, score[10], scoreTemp[10];
bool check;

void checkScore(int x, int y) {
    if(check == 1 ) {
        return;
    } 
    if(x == n && y == n + 1) {
        int itr = 0;
        REP(i, 1, n) {
            cout << scoreTemp[i] << ' ';
            if(score[i] == scoreTemp[i]) {
                itr++;
            }
        }
        cout << "\n";
        if(itr == n ) {
            check = 1;
            cout << "YES" << "\n";
        }
        return;
    }

    int tempX;
    int tempY;

    if(y < n) {
        tempX = x;
        tempY = y + 1;
    }else if(y == n) {
        tempX = x + 1;
        tempY = x + 2;
    }

    //x menang
    scoreTemp[x] += 3;
    checkScore(tempX, tempY);
    scoreTemp[x] -= 3;

    //seri
    scoreTemp[x] += 1;
    scoreTemp[y] += 1;
    checkScore(tempX, tempY);
    scoreTemp[x] -= 1;
    scoreTemp[y] -= 1;

    //y menang
    scoreTemp[y] += 3;
    checkScore(tempX, tempY);
    scoreTemp[y] -= 3;
    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    while(t--) {
        check = false;
        cin >>n;
        REP(i, 1, n) {
            cin >> score[i];
        }
        checkScore(1,2);
        if(check == 0) {
            cout << "NO\n";
        }
    }
}