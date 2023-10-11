#include <stdio.h>

int main(){
    int age;
    char name[101];
    char nis[101];
    scanf("%[^\n]s", &name);
    scanf("%s %d", &nis, &age);
    printf("Name: %s\nNIS: %s\nAge: %d\n", name, nis, age);
}