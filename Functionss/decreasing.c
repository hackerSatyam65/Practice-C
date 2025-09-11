#include<stdio.h>
void decreasing(int n){
    if(n>0){
        printf("%d\n",n);
        decreasing(n-1);
    }
    return ;
}

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    decreasing(a);
    return 0;
}