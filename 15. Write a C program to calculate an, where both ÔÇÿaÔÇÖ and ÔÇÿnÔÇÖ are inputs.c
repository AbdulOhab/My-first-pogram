//Write a C program to calculate an, where both ‘a’ and ‘n’ are inputs.15. Write a C program to calculate an, where both ‘a’ and ‘n’ are inputs.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,c;
    scanf("%d %d" ,&a, &n);
    c=pow(a,n);
    printf(" output:%.0d",c);

}
