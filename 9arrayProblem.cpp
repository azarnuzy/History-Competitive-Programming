#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=0, arr[1000];
    while (scanf("%d", &arr[n]) != EOF)
    {
        n++;
    }   
    cout << n << endl;
    int i;
    for(i=n-1; i>=0; i--) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
