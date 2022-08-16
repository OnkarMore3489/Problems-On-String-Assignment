/*
 5. Write a java program which accept string from user and display 
it in reverse order.
Input : “MarvellouS”
Output : “SuollevraM”

 */
import java.util.*;
class program25_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr;
        boolean bRet=false;

        System.out.println("Enter the string : ");
        Arr=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo(); 
        sdobj.Reverse(Arr);
    }
}
class StringDemo
{
    public void Reverse(String str)
    {
        for(int i=str.length()-1;i>=0;i--)
        {
          char ch=str.charAt(i);
          System.out.print(ch);
        }
    }
}