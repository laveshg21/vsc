#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("enter an integer a: \n");
    scanf("%d" , &a);

    printf("enter a real number b: \n");
    scanf("%f", &b);

    printf("a&&b is %d \n", a&&b); // a&&b is of the type int irrespective of the type of a and b
    printf("a||b is %d \n", a||b);
    printf("!(a&&b) is %d \n", !(a&&b));

    return 0;
}