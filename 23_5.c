/*
5. Write a program which accept string from user and count number of 
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
*/
#include<stdio.h>
#include<stdbool.h>
int CountWhite(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
          count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);
    iRet=CountWhite(arr);
    printf("number of white spaces are : %d",iRet);
    return 0;
}