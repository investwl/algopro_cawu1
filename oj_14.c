#include <stdio.h>

int main(){
    char name1[101], name2[101], age1[101], age2[101];
    double height1, height2;
    scanf("%s %lf %s %s %lf %s", &name1, &height1, &age1, &name2, &height2, &age2);
    printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %s\nName 2: %s\nHeight 2: %.2lf\nAge 2: %s\n", name1, height1, age1, name2, height2, age2);
}