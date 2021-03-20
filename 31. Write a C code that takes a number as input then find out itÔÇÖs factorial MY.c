#include <stdio.h>
int main()
{
    int n,i;
    unsigned long long factorial = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("%llu",factorial);

}
