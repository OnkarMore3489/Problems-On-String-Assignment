/*
2. Write a program which accept string from user and count number of 
small characters.
Input : “Marvellous”
Output : 9
*/
#include<stdio.h>
int CountSmall(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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
    iRet=CountSmall(arr);
    printf("number of small letters is : %d",iRet);
    return 0;
}