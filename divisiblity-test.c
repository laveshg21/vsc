/*Test if a is divisible by b*/
#include<stdio.h>
int main(){ 

    int a, b;
    printf("Enter an integer a:\n");
    scanf("%d" , &a);
    printf("Enter an integer b:\n");
    scanf("%d" , &b);

    if((a%b) ==0) 
    {
        printf("a is divisble by b!\n");
    }
    else 
    {
        printf("a is not divisible by b!");
    }

    return 0;
}