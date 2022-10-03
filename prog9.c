//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of number");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
      printf("%d is greater a and b",a);
    else if( b>a && b>c)
       printf("%d is greater a and c", b);
    else 
      printf("%d is greater a and b",c);
      
} 