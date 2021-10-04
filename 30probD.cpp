#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

ull countUnique(ull mn, ull mx, ull x, ull y, ull z){
    ull count = 0;
    for (int i = x; i <= mx; i += x)
    {
        if((i % x == 0) && (i % y != 0) && (i % z != 0)){
            if(i >= mn){
                count++;
            }
        }
    }
    return count;
}

int main(){
    ull mn, mx, a, b, c;
    cin >> mn >> mx >> a >> b >> c;
    ull result = countUnique(mn, mx, a, b, c);
    result += countUnique(mn, mx, b, a, c);
    result += countUnique(mn, mx, c, b, a);
    cout << result << endl;
    return 0;
}