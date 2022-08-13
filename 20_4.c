/*
4. Accept Character from user and check whether it is small case or 
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if(ch>='a' && ch<='z')
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
        printf("It is a small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }
}