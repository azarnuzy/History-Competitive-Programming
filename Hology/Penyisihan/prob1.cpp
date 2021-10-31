#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    string s, c;
    getline(cin, s);
    getline(cin, c);
    int ci = 0, count = 0;
    for (int j = 0; j < c.length(); j++) {
        size_t find = s.find(c[j]);
        if(find >= 0 && find < s.length()) {
            s.erase(find, 1);
            count++;
        }
    }
    if (count == c.length()) printf("Bisa\n");
    else printf("Tidak Bisa\n");
    return 0;
}