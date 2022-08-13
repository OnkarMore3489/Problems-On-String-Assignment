/*
3. Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
*/
#include<stdio.h>
int Difference(char *str)
{
    int Count_Capital=0,Count_Small=0;
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            Count_Small++;
        }
        else if((*str>='A'&&*str<='Z'))
        {
            Count_Capital++;
        }
        str++;
    }
    return (Count_Small-Count_Capital);
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);
    iRet=Difference(arr);
    printf("number of small letters is : %d",iRet);
    return 0;
}