/*
5. Write a program which accept string from user and display it inn 
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
*/
#include<stdio.h>
void Reverse(char *str)
{
   char *start=str;
   char *end=str;

   while(*end!='\0')
   {
       end++;
   }
   end--;

   while(start<end)
   {
       char temp='\0';
       temp=*start;
       *start=*end;
       *end=temp;

       start++;
       end--;
   }

}
int main()
{
    char arr[20];
    printf("Enter the string : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is :%s",arr);
    return 0;
}