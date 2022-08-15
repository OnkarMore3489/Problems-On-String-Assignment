/*
3. Write a program which accept string from user and copy that 
characters of that string into another string by converting all small 
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
*/
#include<stdio.h>
void StrCpyCapX(char *src, char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a' && *src<='z'))
        {
            *src=*src-32;
            *dest=*src;
        }
        else
        {
            *dest=*src;
        }
        src++;
        dest++;
    }
}
int main()
{
char Arr[30] = "Marvel lous Pyth on";
char Brr[30]; // Empty string
StrCpyCapX(Arr,Brr);
printf("%s",Brr); // MarvellousPython
return 0;
}