//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(100<=n>999)
       {printf("%d is three digit number:",n);}
     else 
       {printf("%d is not three digit number:",n);}
}