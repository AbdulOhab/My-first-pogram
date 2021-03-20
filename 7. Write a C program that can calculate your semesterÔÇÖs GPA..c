#include<stdio.h>
int main()
{

float gpa1,gpa2,gpa3,gpa4,cgpa;
printf("Enter your first gpa=");
scanf("%f",&gpa1);
printf("\nEnter your 2nd gpa=");
scanf("%f",&gpa2);
printf("\nEnter your 3rd gpa=");
scanf("%f",gpa3);
printf("\nEnter your 4rth gpa=");
scanf("%f",&gpa4);
cgpa=(gpa1*3+gpa2*3+gpa3*3+gpa4*3)/4;
printf("\nYour CGPA is %f",cgpa);
getch();
}
