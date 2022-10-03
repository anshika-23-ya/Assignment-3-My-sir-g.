//Write a program to check whether a given number is an even number or an odd
//number without using % operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number:");
    scanf("%d",&n);
    if(n&1)
      printf("%d is odd number",n);
    else
      printf("%d is even number:");
    return 0;  
}