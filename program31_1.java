/*
1.Write a Java program which accept string from user and count 
number of capital characters.
Input : “Marvellous Multi OS”
Output : 4
 */
import java.util.*;
class program31_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr;
        int iRet=0;

        System.out.println("Enter the string : ");
        Arr=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo(); 
        iRet=sdobj.CountCapital(Arr);
        System.out.println("No of Capital Characters are : "+iRet);
    }
}
class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt=0;
        for(int i=0;i<str.length();i++)
        {
          char ch=str.charAt(i);
          if(ch>='A' && ch<='Z')
          {
              iCnt++;
          }
        }
        return iCnt; 
    }
}