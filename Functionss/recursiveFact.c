#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int a;
    printf("Enter a number to find its factorial: ");
    scanf("%d",&a);
    int b = factorial(a);
    printf("The factorial of %d is %d\n",a,b);
}