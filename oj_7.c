#include <stdio.h>

int main(){
    char bday_name[101];
    scanf("%[^\n]s", bday_name);
    printf("Happy Birthday to %s.\n", bday_name);
}