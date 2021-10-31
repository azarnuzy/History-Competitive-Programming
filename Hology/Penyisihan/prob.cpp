#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    string s, c;
    getline(cin, s);
    getline(cin, c);
    int ci = 0, count = 0;
    for (int j = 0; j < s.length(); j++) {
        if(c[j] == ' ') ci++;
        if(s[j] == ' ') continue;
        if(s[j] == c[ci]) {
            count++;
            ci++;
        }
        else continue;
    }
    if (count == c.length()) printf("Bisa\n");
    else printf("Tidak Bisa\n");
    return 0;
}