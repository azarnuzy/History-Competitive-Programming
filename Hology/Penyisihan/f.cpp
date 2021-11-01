#include <bits/stdc++.h>
using namespace std;

int cek(int a, int b, int c, int d){
    cout << a << b << c << d;
    if(a * b * c * d == 36) { return 1; }
    if(a / b / c / d == 36) { return 1; }
    if(a + b + c + d == 36) { return 1; }
    if(a - b - c - d == 36) { return 1; }
    if(a * (b + c) + d == 36) { return 1; }
    if(a * (b + c) - d == 36) { return 1; }
    if(a * (b - c) + d == 36) { return 1; }
    if(a * (b - c) - d == 36) { return 1; }
    if(a * (b + c + d) == 36) { return 1; }
    if(a * (b + c - d) == 36) { return 1; }
    if(a * (b - c + d) == 36) { return 1; }
    if(a * (b - c - d) == 36) { return 1; }
    if(a / (b + c) + d == 36) { return 1; }
    if(a / (b + c) - d == 36) { return 1; }
    if(a / (b - c) + d == 36) { return 1; }
    if(a / (b - c) - d == 36) { return 1; }
    if(a / (b + c + d) == 36) { return 1; }
    if(a / (b + c - d) == 36) { return 1; }
    if(a / (b - c + d) == 36) { return 1; }
    if(a / (b - c - d) == 36) { return 1; }
    if(a * b * (c + d) == 36) { return 1; }
    if(a * b * (c - d) == 36) { return 1; }
    if(a * (b * c + d) == 36) { return 1; }
    if(a * (b * c - d) == 36) { return 1; }
    if(a * b / (c + d) == 36) { return 1; }
    if(a * b / (c - d) == 36) { return 1; }
    if(a * b / (c + d) == 36) { return 1; }
    if(a * b / (c - d) == 36) { return 1; }
    if(a / b * (c + d) == 36) { return 1; }
    if(a / b * (c - d) == 36) { return 1; }
    if(a / b * (c + d) == 36) { return 1; }
    if(a / b * (c - d) == 36) { return 1; }
    if(a / b / (c + d) == 36) { return 1; }
    if(a / b / (c - d) == 36) { return 1; }
    if(a / (b / c + d) == 36) { return 1; }
    if(a / (b / c - d) == 36) { return 1; }

    return 0;
}

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int result = 0;
    
    result += cek(a, b, c, d);
    result += cek(a, b, d, c);
    result += cek(a, c, d, b);
    result += cek(a, c, b, d);
    result += cek(a, d, b, c);
    result += cek(a, d, c, b);
    result += cek(b, c, d, a);
    result += cek(b, c, a, d);
    result += cek(b, d, a, c);
    result += cek(b, d, c, a);
    result += cek(b, a, c, d);
    result += cek(b, a, d, c);
    result += cek(c, d, b, a);
    result += cek(c, d, a, b);
    result += cek(c, b, a, d);
    result += cek(c, b, d, a);
    result += cek(c, a, b, d);
    result += cek(c, a, d, b);
    result += cek(d, a, b, c);
    result += cek(d, a, c, b);
    result += cek(d, c, a, b);
    result += cek(d, c, b, a);
    result += cek(d, b, c, a);
    result += cek(d, b, a, c);
    cout << endl;
    cout << result;
    if(result > 0) { cout << "Bisa\n"; }
    else { cout << "Tidak Bisa\n"; }
    /*
    (+)a * (b +- c) +- d1

(+)a * (b +- c +- d)2

(+)a / (b +- c) +- d3

(+)a / (b +- c +- d)4

(+)a * b * (c +- d)5

(+)a * (b * c +- d)6

(+)a * b / (c +- d)7

(+)a * b / (c +- d)8

(+)a / b * (c +- d)9

(+)a / b * (c +- d)10

(+)a / b / (c +- d)11

(+)a / (b / c +- d)12


    */
    return 0;
}