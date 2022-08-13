/*
5. Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function).
Input : “Marvellous Infosystems”
“Logic Building”
Output : “Marvellous Infosystems Logic Building”
*/
#include<stdio.h>
void strcatX(char *str1,char *str2)
{
    while(*str1!='\0')
    {
        str1++;
    }

    while(*str2!='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}
int main()
{
    char Arr[30];
    char Brr[30];
    printf("Enter First string : ");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter Second string : ");
    scanf(" %[^'\n']s",Arr);

    strcatX(Arr,Brr);
     printf("concatenate string is : %s",Arr);
    return 0;
}