//31. Write a C code that takes a number as input then find out it’s factorial.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=n;i++)
        {
            factorial=factorial*i;
        }
        printf("Factorial of %d = %llu", n,factorial);
    }
    return 0;
}
