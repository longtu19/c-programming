#include <stdio.h>
int main(){
    double a;
    double b;
    char c;
    double res;
    printf("Enter 1st number: ");
    scanf("%lf", &a);
    printf("Enter op: ");
    scanf(" %c", &c);
    printf("Enter 2nd number: ");
    scanf("%lf", &b);
    res = (c == '+')? (a+b):((c == '-')?(a-b):((c== '*')? (a*b):((c == '/')? (a/b): 0)));
    printf("%lf", res);
    


    
    return 0;
}