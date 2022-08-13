/*
1.Write a program which accept string from user and convert it into 
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
*/
#include<stdio.h>
#include<stdbool.h>
void ConvertLower(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
          printf("%c",(*str+32));
        }
        else
        {
            printf("%c",*str);
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
    ConvertLower(arr);
    return 0;
}