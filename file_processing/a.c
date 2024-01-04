#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    fptr = fopen("testdata.in", "r");
    int length_tree, i , j;
    fscanf(fptr, "%d", &length_tree);
    getc(fptr);
    char name[length_tree][41];
    char tree_name[length_tree][41];
    for (i = 0 ; i < length_tree ; i++){
        fscanf(fptr, " %[^#]#%[^\n]", name[i], tree_name[i]);
    }
    getc(fptr);
    int test_case;
    fscanf(fptr, "%d", &test_case);
    getc(fptr);
    char look_for_names[test_case][41];
    for (i = 0 ; i < test_case ; i++){
        fscanf(fptr, "%s", look_for_names[i]);
        
    }
    // getc(fptr);
    int flag = 1;
    for (i = 0 ; i < test_case; i++){
        flag = 1;
        for (j = 0 ; j < length_tree ; j++){
            // printf("%s %s --> %d\n", look_for_names[i], name[j], strcmp(look_for_names[i], name[j]));
            if (strcmp(look_for_names[i], name[j]) == 0){
                printf("Case #%d: %s\n", i + 1, tree_name[j]);
                flag = 0;
                break;
            }
            
        }
        if (flag){
            printf("Case #%d: N/A\n", i + 1);
        }
    }
    fclose(fptr);
}
