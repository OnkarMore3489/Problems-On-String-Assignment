/*
2.Write a program which accept string from user and convert it into 
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
*/
#include<stdio.h>
#include<stdbool.h>
void ConvertUpper(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
          printf("%c",(*str-32));
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
    ConvertUpper(arr);
    return 0;
}