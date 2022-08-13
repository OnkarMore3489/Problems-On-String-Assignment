/*
2.Write a program which accept string from user and accept one 
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
*/
#include<stdio.h>
int CountFreq(char *str,char ch)
{
    int iCnt=0;
    while(*str!='\0')
    {
        if((*str==ch))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    char cValue='\0';
    int iRet=0;

    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character that u want to find frequency : ");
    scanf(" %c",&cValue);

    iRet=CountFreq(Arr,cValue);
    printf("Frequncy of %c character is : %d",cValue,iRet);
    return 0;
}