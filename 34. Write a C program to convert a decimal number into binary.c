#include <stdio.h>

int main()
{
    long long decimal, tempDecimal, binary;
    int rem, place = 1;
    binary = 0;
    printf("Enter any decimal number: ");
    scanf("%lld", &decimal);
    while(decimal > 0)
    {
        rem=decimal % 2;
         binary=(rem * place)+binary;
         decimal /= 2;
         place *= 10;
    }


    printf("Binary number = %lld", binary);

    return 0;
}
