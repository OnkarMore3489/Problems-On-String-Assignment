/*
 3. Write a java program which accept string from user and return 
difference between frequency of small characters and frequency 
of capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
 */
import java.util.*;
class program31_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr;
        int iRet=0;

        System.out.println("Enter the string : ");
        Arr=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo(); 
        iRet=sdobj.DiffSmallCap(Arr);
        System.out.println("Difference between No of Small Characters and Capital Character are : "+iRet);
    }
}
class StringDemo
{
    public int DiffSmallCap(String str)
    {
        int CountCapital=0,CountSmall=0;
        for(int i=0;i<str.length();i++)
        {
          char ch=str.charAt(i);
          if(ch>='A' && ch<='Z')
          {
              CountCapital++;
          }
          else if(ch>='a' && ch<='z')
          {
              CountSmall++;
          }
        }
        return CountSmall-CountCapital; 
    }
}