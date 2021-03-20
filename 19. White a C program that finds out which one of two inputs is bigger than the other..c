 #include <stdio.h>
    int main()
    {
       double A,B,C;
       printf("Enter the first number=\n ");
       scanf("%lf", &A);
       printf("Enter the seconds number=\n ");
       scanf("%lf", &B);
       printf("Enter the third number= \n");
       scanf("%lf", &C);



        if( A>=B && A>=C)
        {
            printf("%.0f is the bigger number.",A);
        }

else if(B>=A && B>=C)
        {
            printf("%.0f is the bigger number.",B);
        }
    else
        {
            printf("%.0f is the bigger number.",C);
        }
        //the smallest number from
         if( A<=B && A<=C)
        {
            printf("\n%.0f is the smaller number.",A);
        }

else if(B<=A && B<=C)
        {
            printf("\n%.0f is the smaller number.",B);
        }
    else
        {
            printf("\n%.0f is the smaller number.",C);
        }


return 0;
    }

