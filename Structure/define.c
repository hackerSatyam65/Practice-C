#include<stdio.h>
int main(){
    struct man{
        int age;
        char name[20];
    };

    struct man person;
    person.age = 30;
    printf("Age: %d\n", person.age);
    printf("Size of person struct: %zu\n", sizeof(person));
    return 0;
}