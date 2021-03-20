// Write a program to find out the letter grade of an input mark.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Grade: ");
    scanf("%d",&a);

    if(a>=80 && a<=100) printf("A+",a);
    else if(a>=75 && a<=79) printf("A",a);
    else if(a>=70 && a<=74) printf("A-",a);
    else if(a>=65 && a<=69) printf("B+",a);
    else if(a>=60 && a<=64) printf("B",a);
    else if(a>=55 && a<=59) printf("B-",a);
    else if(a>=50 && a<=54) printf("C+",a);
    else if(a>=45 && a<=49) printf("C",a);
    else if(a>=40 && a<=44) printf("D",a);
    else if(a>=0 && a<=39)  printf("F",a);
    else
        printf("wrong%d",a);
    return 0;

    }
