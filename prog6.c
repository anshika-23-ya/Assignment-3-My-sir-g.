//6. Write a program to print greater between two numbers. Print one number of both are
//the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    if(a<b)
     printf("B is greater than a",a);
    else if(a=b)
          printf("%d a is equal to b") ;
    else
      printf("A is greater than b",b);
}