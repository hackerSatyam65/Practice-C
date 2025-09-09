#include<stdio.h>


void add(int* x, int* y){
     *x= *x +10;
     *y= *y +10;
     return;
     
}

void sum(int x, int y){
     x = x+10;
     y = y+10;
    return;
}


int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    // add(&a,&b);
    sum(a,b);
    printf(" %d and %d \n",a,b);
    return 0;
}