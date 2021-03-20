//Write a C program to find out if a number is a multiple of 5 or not.
#include<stdio.h>

void main()
{
  int a;
  printf("\nEnter a number ");
  scanf("%d",&a);
  if (a%5==0)
        printf("%d integer is a multiple of 5. ", a);
        else
        printf("integer is not a multiple of 5.", a);

}



