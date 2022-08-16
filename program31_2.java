/*
2. Write a java program which accept string from user and count 
number of small characters.
Input : “Marvellous”
Output : 9
 */
import java.util.*;
class program31_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr;
        int iRet=0;

        System.out.println("Enter the string : ");
        Arr=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo(); 
        iRet=sdobj.CountSmall(Arr);
        System.out.println("No of Small Characters are : "+iRet);
    }
}
class StringDemo
{
    public int CountSmall(String str)
    {
        int iCnt=0;
        for(int i=0;i<str.length();i++)
        {
          char ch=str.charAt(i);
          if(ch>='a' && ch<='z')
          {
              iCnt++;
          }
        }
        return iCnt; 
    }
}