/*
1. Write a program which accept string from user and copy that 
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM”

*/
#include<stdio.h>
void StrCpyRev(char *src,char *dest)
{
    char *end=src;
    char *start=src;
    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<=end)
    {
        *dest=*end;
        end--;
        dest++;
    }
    *dest='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];
    printf("Enter the string : ");
    scanf("%[^'\n']s",Arr);

    StrCpyRev(Arr,Brr);
     printf("reversed string is : %s",Brr);
    return 0;
}