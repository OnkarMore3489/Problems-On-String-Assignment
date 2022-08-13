/*
1.Write a program which accept string from user and accept one 
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool ChkChar(char *str,char ch)
{
    bool bResult=false;
    while(*str!='\0')
    {
        if((ch==*str))
        {
            bResult=true;
            break;
        }
        else
        {
            bResult=false;
        }
        str++;
    }
    return bResult;
}
int main()
{
    char Arr[50];
    bool bRet=false;
    char cValue='\0';
   
    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter that character which you want to search : ");
    scanf(" %c",&cValue);
        
    bRet=ChkChar(Arr,cValue);
    if(bRet==true)
    {
        printf("%c Character is present in the string\n",cValue);
    }
    else
    {
        printf("%c Character is not present in the string\n",cValue);
    }
    return 0;
}