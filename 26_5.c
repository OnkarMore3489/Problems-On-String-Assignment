/*
5. Write a program which accept string from user and copy that 
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”
*/
#include<stdio.h>
void StrCpyToggle(char *src, char *dest)
{
    while(*src!='\0')
    {
        if((*src>='A' && *src<='Z'))
        {
            *src=*src+32;
            *dest=*src;
        }
        else if((*src>='a' && *src<='z'))
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
char Arr[30] = "Marvellous Python 2";
char Brr[30]; // Empty string
StrCpyToggle(Arr,Brr);
printf("%s",Brr); // MarvellousPython
return 0;
}