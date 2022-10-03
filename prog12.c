//12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
 char ch;
 printf("Enter the character:");
 scanf("%c",&ch);
  if (ch>='A' &&  ch>'a' )
     printf("%c is lower case",ch);
  else{
    printf("%c is upper case",ch);
  }
}

