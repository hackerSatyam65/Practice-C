#include<stdio.h>

void repeat(int n){
    if(n>0){
        printf("welcome\n");
        repeat(n-1);
    }
    return ;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    repeat(a);
}