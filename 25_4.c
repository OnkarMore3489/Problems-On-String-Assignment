/*
4. Write a program which accept string from user and copy small 
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi”
*/
#include<stdio.h>
void strCpyCap(char *str,char *dest)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
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