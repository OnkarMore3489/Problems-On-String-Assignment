/*
1.Write a program which accept string from user and count number of 
capital characters.
Input : “Marvellous Multi OS”
Output : 4
*/
#include<stdio.h>
int CountCapital(char *str)
{
    int count=0;
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
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
    iRet=CountCapital(arr);
    printf("number of capital letters is : %d",iRet);
    return 0;
}
//another method
/*int CountCapital(char *str)
{
    int count=0,i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
        str++;
    }
    return count;
}*/