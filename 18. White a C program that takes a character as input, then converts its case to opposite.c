#include<stdio.h>
#include<string.h>

int main()
{
    char input[1000];
    printf("Enter a String\n");
    gets(input);
    printf("String with all opposite characters \n:%s", strupr(input));
    return 0;
}
