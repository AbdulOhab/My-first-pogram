#include<stdio.h>
int main ()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>b&&a>c){
        printf("the maximam number is=%.0lf\n",a);
    }
    else if(b>a&&b>c){
        printf("the maximam number is=%.0lf\n",b);
    }
    else{
        printf("the maximam number is=%.0lf\n",c);
    }
    // minimum number
    if(a<b&&a<c){
        printf("the minimum number is=%.0lf\n",a);
    }
    else if(b<a&&b<c){
        printf("the minimum number is=%.0lf\n",b);
    }
    else{
        printf("the minimum number is=%.0lf\n",c);
    }
    return 0;
}
