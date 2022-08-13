/*
3. Accept Character from user and check whether it is digit or not 
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if(ch>='0' && ch<='9')
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
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }
}