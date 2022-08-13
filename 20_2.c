/*
2. Accept Character from user and check whether it is capital or not 
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckAlpha(char ch)
{
    if(ch>='A' && ch<='Z')
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
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }
}