/*
4. Write a program which accept string from user and check whether 
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
bool CheckVowels(char *str)
{
    bool fResult=false;
    while(*str!='\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u')
        {
            fResult=true;
            break;
        }
        else 
        {
            fResult=false;
        }
        str++;
    }
    return fResult;
}
int main()
{
    char arr[20];
    bool bRet=false;
    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);
    bRet=CheckVowels(arr);
    if(bRet==true)
    {
        printf("It Contains Vowels\n");
    }
    else
    {
        printf("There Is No Vowels in it\n");
    }
    return 0;
}