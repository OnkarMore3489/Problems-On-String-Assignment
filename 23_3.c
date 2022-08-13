/*
3.Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
*/
#include<stdio.h>
#include<stdbool.h>
void Strtoggle(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
          printf("%c",(*str-32));
        }
        else if(*str>='A' && *str<='Z')
        {
            printf("%c",(*str+32));
        }
        str++;
    }
}
int main()
{
    char arr[20];
    bool bRet=false;
    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);
    Strtoggle(arr);
    return 0;
}