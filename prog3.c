//3. Write a program to check whether a given number is an even number or an odd
//number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is Even number",n);
    }
    else
    {
        printf("%d is odd number:",n);
    }
    return 0;
}