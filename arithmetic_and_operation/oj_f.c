#include <stdio.h>

int main(){
    int angka1, angka2, angka3, angka4, angka5, angka6;
    char sym1, sym2, sym3;
    char equal1, equal2, equal3;
    scanf("%d %c %d %c\n", &angka1, &sym1, &angka2, &equal1);
    scanf("%d %c %d %c\n", &angka3, &sym2, &angka4, &equal2);
    scanf("%d %c %d %c", &angka5, &sym3, &angka6, &equal3);
    printf("%d\n%d\n%d\n", (angka1 + angka2), (angka3 + angka4), (angka5 + angka6));
}