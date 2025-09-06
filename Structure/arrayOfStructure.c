#include<stdio.h>
#include<string.h>
int main(){
    typedef struct crickter{
        char name[20];
        int age;
        int noOfMatch;
        float avg;
    } crickter;

    crickter satyam[3];
    for(int i=0; i<3; i++){
        printf("Enter name, age, noOfMatch and avg of crickter %d: ", i+1);
        scanf("%s %d %d %f", satyam[i].name, &satyam[i].age, &satyam[i].noOfMatch, &satyam[i].avg);
    }

    for(int i=0; i<3; i++){
        printf("\nCrickter %d details:\n", i+1);
        printf("Name: %s\n", satyam[i].name);
        printf("Age: %d\n", satyam[i].age);
        printf("No of Matches: %d\n", satyam[i].noOfMatch);
        printf("Average: %.2f\n", satyam[i].avg);
    }

return 0;
}