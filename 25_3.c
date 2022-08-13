/*
3. Write a program which accept string from user and copy capital 
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”
*/
#include<stdio.h>
void strCpyCap(char *str,char *dest)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *dest=*str;
            dest++;
        }
        str++;
    }
}
int main()
{
    char Arr[30];
    char Brr[30];
    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    strCpyCap(Arr,Brr);
    printf("capital characters are : %s",Brr);
    return 0;
}