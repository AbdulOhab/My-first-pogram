#include<stdio.h>
#include<string.h>
int main()
{
      char str[20];
      int i;
      printf("Enter any string->");
      scanf("%s",str);



      for(i=0;i<=strlen(str);i++)
        {
                if(str[i]>=97 && str[i]<=122)

                {str[i]=str[i]-32;
                    printf("\nThe string in lowercase is->%s",str);
                    break;
                }
                else if(str[i]>=65 && str[i]<=90);

                { str[i]=str[i]+32;
                     printf("\nThe string in upercase is->%s",str);
                      break;
                }
        }

}
