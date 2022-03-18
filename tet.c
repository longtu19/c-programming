#include <stdio.h>
#include <string.h>



int main(){
    char* a = "11001101";
    char temp[strlen(a)];
    int n = 6;
    int count = 0;
    int size = strlen(a);
    for (int i = 0; i < size; ++i){
        if (n < size){

            if (i >= n){ 
                temp[i-n] = a[i];      
            }

        }
        else{
        temp[0] = '0';
        temp[1] = '\0';
        break;
        }
        
    }
    //printf("%c\n", temp[0]);

    for (int i = strlen(temp); i < strlen(a); ++i){
        temp[i] = '0';
    }
    temp[strlen(a)] = '\0';

    for (int i =0; i < strlen(temp); ++i){
        printf("%c ", temp[i]);
    }
    printf("\n");
    return 0;
}