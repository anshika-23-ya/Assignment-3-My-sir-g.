//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter  the year:");
    scanf("%d",&year);
    if(year%4==0 )
     { if( year%100==0)
       {
           if(year%400==0)
          printf("%d is a leap year:",year);
       } 
     }
    else
       printf("%d is not leap year:",year) ;
}