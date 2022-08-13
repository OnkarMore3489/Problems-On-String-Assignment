/*
4.Write a program which accept string from user and accept one 
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
*/
#include<stdio.h>
int LastOccur(char *str,char ch)
{
    int iCnt=0,iResult=-1;
    while(*str!='\0')
    {
        if((*str==ch))
        {
            iResult=iCnt;
        }
        str++;
        iCnt++;
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

    iRet=LastOccur(Arr,cValue);
    printf("First Occurence of %c character is : %d",cValue,iRet);
    return 0;
}