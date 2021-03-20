#include <stdio.h>
int main()
{
    int n1,n2,n,gcd,lcm;
    printf("enter two integers:");
    scanf("%d %d", &n1,&n2);
    //Gcd
    for (n=1;n<=n1 &&n<+n2;n++)
    {
      if(n1%n==0 && n2%n==0)
        gcd=n;
    }
     printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
    lcm = (n1*n2)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    }

