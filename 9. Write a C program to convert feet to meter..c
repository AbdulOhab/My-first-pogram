#include <stdio.h>
void main()
{
    float i,j=0.3048,k;
    printf("input feet:");
    scanf("%f",&i);
    k=i*j;
    printf("meter: %f",k);
    return 0;
}

