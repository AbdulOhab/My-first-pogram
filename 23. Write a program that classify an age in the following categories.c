// Write a program that classify an age in the following categories:
#include<stdio.h>
int main()
{
    int a;
    printf("Enter age: ");
    scanf("%d",&a);

    if(a>=0 && a<=12) printf("Kid",a);
    else if(a>=13 && a<=19) printf("Teenage",a);
    else if(a>=20 && a<=45) printf("Adult",a);
    else if(a>=46 && a<=60) printf("Middle",a);
    else if(a>=60 && a>=100) printf("Old",a);
    else
        printf("wrong",a);
    return 0;

    }
