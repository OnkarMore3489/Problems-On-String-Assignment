/*
5. Write a program which accept string from user reverse that string 
in place.
Input : “abcd”
Output : “dcba”
Input : “abba”
Output : “abba”
*/
#include<stdio.h>
int StrRevX(char *str)
{
    char *end=str;
    while(*end!='\0')
    {
       end++;
    }
    end--;

    while(str<end)
    {
      char temp='\0';
      temp=*str;
      *str=*end;
      *end=temp;

      str++;
      end--;
    }
}
int main()
{
    char Arr[30];

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);
    printf("Reverse string is : %s",Arr);
    return 0;
}