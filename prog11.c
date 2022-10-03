//Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed.
#include<stdio.h>
int main()
{
    int h,e,m,s,ss;
    printf("Enter the value of the subject:");
    scanf("%d %d %d %d %d",&h,&e,&m,&s,&ss);
    if( h,e,m,s,ss>33)
      printf("%d candidate is pass on the exam:",h,e,m,s,ss);
    else
      printf("%d candidate is not pass on the exam",h,e,m,s,ss);
}