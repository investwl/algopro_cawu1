#include <stdio.h>

int main(){
    long int id;
    char name[101];
    char class[2];
    int number;
    char tumbal;
    // scanf("%s", &id);
    // while ((getchar()) != '\n');
    // scanf("%[^\n]s", &name);
    // while ((getchar()) != '\n');
    // scanf("%c %d", &class, &number);
    // while ((getchar()) != '\n');
    scanf("%ld\n", &id);
    scanf("%[^\n]s\n", &name);
    scanf("%s %d", &class, &number);
    printf("Id    : %0*ld\n", 10, id);
    printf("Name  : %s\n", name);
    printf("Class : %s\n", class);
    printf("Num   : %d\n", number);
}
