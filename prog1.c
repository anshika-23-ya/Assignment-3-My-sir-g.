//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>=0)
      printf("%d is a positive number:");
    else
       printf("%d is a non positive  number:")  ;
}