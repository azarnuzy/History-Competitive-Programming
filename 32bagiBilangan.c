#include <stdio.h>

int findGcd(int x, int y){
	if(y == 0){
		return x;
	}else{
		return findGcd(y, x % y);
	}
}	

int findLcm(int x, int y){
	return x * ( y / findGcd(x,y));
}

int main(int argc, char const *argv[])
{
    int n,a,b;

    scanf("%d %d %d", &n, &a, &b);

    int lcm;
    lcm = findLcm(a,b);

    int resA, resB, resX;
    resA = n / a;
    resB = n / b;
    resX = n / lcm;

    int sum;
    sum = resA + resB - resX;

    printf("%d\n", sum);
    return 0;
}
