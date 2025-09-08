#include<stdio.h>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}

int add(int* x, int* y){
    return fact(*x + *y);
}

int sum(int x, int y){
    return fact(x + y);
}


int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int val = add(&a,&b);
    int val2 = sum(a,b); // This is just to show that the function can be called multiple times with different arguments
    printf("The sum of %d and %d is %d and %d \n",a,b,val,val2);
    return 0;
}