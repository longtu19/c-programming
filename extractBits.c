#include <stdio.h>

int get_set(unsigned int address)
{
    // TODO:
    //  Extract the set bits from a 32-bit address.
    //

    unsigned int diachi = address;
    diachi = diachi >> (2 + 1);

    return diachi;
}

int main(){
    int a = 12;

    int b = get_set(a);
    printf("%d\n", b);




}

