//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
     printf("%d is positive number: ",n);
    else if(n==0) 
       printf("%d is equal number:",n);
    else
        printf("%d is negative number",n);   
}