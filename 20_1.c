/*
1. Accept Character from user and check whether it is alphabet or not 
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
      return true;
    }
    else
    {
      return false;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;
    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet=CheckAlpha(cValue);
    if(bRet==true)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }
}