#include <stdio.h>

int main(){
    char inputburu[101];
    scanf("%[^\n]s", &inputburu);
    printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", inputburu);
}