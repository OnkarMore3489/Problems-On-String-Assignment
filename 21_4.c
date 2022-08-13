/*
4. Accept Character from user and check whether it is special symbol 
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&' || ch=='*')
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
char cValue = '\0';
bool bRet = false;
printf("Enter the character : ");
scanf("%c",&cValue);
bRet = ChkSpecial(cValue);
if(bRet == true)
{
printf("It is special Character");
}
else
{
printf("It is not a special Character");
}
return 0;
}