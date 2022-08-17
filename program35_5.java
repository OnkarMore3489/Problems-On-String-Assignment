/*
5. Accept string from user and check whether the string is 
palindrome or not without considering its case.
Input : “1abccBA1”
Output : TRUE
 */
import java.util.Scanner;
class program35
{
    public static void main(String arg[])
    {
      String s;
      boolean bRet=false;
      Marvellous mobj = new Marvellous();
      mobj.Accept();
      
      bRet=mobj.ChechPalindrome();
      if(bRet==true)
      {
          System.out.println("String is Palindrome");
      }
      else
      {
          System.out.println("String is Not Palindrome");
      }
    }
}
class StringDemo
{
    public String str;
    
    public void Accept()
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the String : ");
      str=sobj.nextLine();
    }
}
class Marvellous extends StringDemo
{
    public boolean ChechPalindrome()
    {
        char ch[]=str.toCharArray();
        int i=0;
        int j=ch.length-1;
        char temp='\0';

        while(i<j)
        {
          temp=ch[i];
          ch[i]=ch[j];
          ch[j]=temp;

          i++;
          j--;
        }
        
        String newstr = new String(ch);
        if(newstr.equals(str))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

}