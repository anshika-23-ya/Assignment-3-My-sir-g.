//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int b,a,c,d;
    printf("Enter the value of the number:");
    scanf("%d %d %d",&b,&a,&c);
    d=b*b-4*a*c;
    if(d>0)
     printf(" %d the quadratic function has two distinct real roots.",d);
    else if(d=0)
     printf("%d the quadratic function has two distinct real roots. ",d);
    else 
     printf("%dquadratic function has no real roots.",d) ;
     
}