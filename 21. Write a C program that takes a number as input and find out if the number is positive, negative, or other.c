#include<stdio.h>
int main ()
{
    double a;
    printf(" Enter the number : ");
    scanf("%lf",&a);
     if( a>0.0) printf ("positive number");
     else if (a<0.0) printf (" negative number");
     else printf("other");
     return 0;
}
