#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }

    return fact;
}

int combination(int n, int r){
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int permutation(int n, int r){
    return (factorial(n)/(factorial(r)));
}

int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr = %d\n", combination(n,r));
    printf("nPr = %d\n", permutation(n,r));
    return 0;
}