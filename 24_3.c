/*
3.Write a program which accept string from user and accept one 
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 0
Piyush Khairnar - 7588945488 आम्ही Technical संस्कार करतो !!! ©Marvellous Infosystems Page 3
Marvellous Logic Building Assignment : 24 
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/
#include<stdio.h>
int FirstOccur(char *str,char ch)
{
    int iCnt=0,iResult=0;
    while(*str!='\0')
    {
        if((*str==ch))
        {
            iResult=iCnt;
            break;
        }
        else
        {
            iResult=-1;
        }
        iCnt++;
        str++;
    }
    return iResult;
}
int main()
{
    char Arr[30];
    char cValue='\0';
    int iRet=0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet=FirstOccur(Arr,cValue);
    printf("First Occurence of %c character is : %d",cValue,iRet);
    return 0;
}