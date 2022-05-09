#include <stdio.h>
#include <string.h>

int main(){
    char* name[7];
    name[0] = "Harry";
    name[1] = "Peter";
    for (int i = 0; i < 7; ++i){
        if (name[i] != NULL){
            if (strcmp(name[i], "Nick")  == 0){
            name[i] = NULL;
            }

        }
        printf("None");
        break;
        
        
    }


}