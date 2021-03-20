//26. Write a C program to print all the odd numbers between 1 to 100.
#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
        if(a%2)
    {
        printf("%d\n",a);
    }
    return 0 ;
}
