//16. Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:",ch);
    scanf("%c",& ch);
    if(ch>=97 && ch<=122)
     printf("%c is lower case",ch);
    else if(ch>=48 && ch<=57)
      printf("%c is digit and symbol",ch);
    else if(ch>=65 && ch<=97)
      printf("%c is upper case",ch);
}
        