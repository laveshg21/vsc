#include<stdio.h>

int main(){

/*code 1*/
int a;
printf("Enter an integer a: \n");
scanf("%d", &a);

if ((a%6) ==0 && (a%4) ==0) /*nested if is used by instructor in video. see code 2*/
{
printf("%d is divisble by 4 and 6." , a);
}

else 
{
printf("%d is not divisble by 4 and 6." , a);
}

/*code 2*/
int a;
printf("Enter an integer a: \n");
scanf("%d", &a);

if ((a%6) ==0) 
{
    if ((a%4) ==0) // nested if
    {
        printf("%d is divisble by 4 and 6.\n" , a);
    }
    else 
    {
        printf ("%d is divisible by 6 but not 4.\n" , a);
    }

}

else 
{
    if ((a%4) ==0) // nested if
    {
        printf("%d is divisble by 4 but not 6.\n" , a);
    }
    else 
    {
        printf("%d is not divisble by 4 and 6.\n" , a);
    }

}

    return 0;
}