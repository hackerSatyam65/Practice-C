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

int main(){
    int r ,c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for(int i=0; i<r; i++) {
        // Print leading spaces for triangle shape
        for(int space=0; space<r-i-1; space++) {
            printf(" ");
        }
        for(int j=0; j<=i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}