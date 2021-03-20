//Write a C program to add the following series:
//1 + 2+ 4 + 8 + 16 + 32 + 64 + … = ?

#include<stdio.h>
int main()
{
    int a,sum;
    for(a=1;a<=1000;a*=2)

    {
           sum += a;

           printf("+%d ",a);

    }
    printf("=%d\n",sum);
    return 0 ;
}
