/*
 4. Write a java program which accept string from user and check 
whether it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
 */
import java.util.*;
class program31_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr;
        boolean bRet=false;

        System.out.println("Enter the string : ");
        Arr=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo(); 
        bRet=sdobj.ChkVowel(Arr);
        if(bRet==true)
        {
            System.out.println("It contain Vowel");
        }
        else
        {
            System.out.println("It cannot contain Vowel");
        }
    }
}
class StringDemo
{
    public boolean ChkVowel(String str)
    {
        int CountCapital=0,CountSmall=0;
        boolean bResult=false;
        for(int i=0;i<str.length();i++)
        {
          char ch=str.charAt(i);
          if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
          {
             bResult=true;
             break;
          }
          else
          {
              bResult=false;
          }
        }
        return bResult;
    }
}