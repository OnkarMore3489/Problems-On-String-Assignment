/*
1. Write a java program which accepts 2 strings from user and 
concat N characters of second string after first string.Value of N 
should be accepted from user.
Note : If third parameter is greater than the size of second string 
then concat whole string after first string.
Input : “Marvellous Infosystems”
“Logic Building”
5
Output : “Marvellous Infosystems Logic”
 */
import java.util.Scanner;
class program35
{
    public static void main(String arg[])
    {
      String s;

      Marvellous mobj = new Marvellous();
      mobj.Accept();
      
      s=mobj.StrNCat();
      System.out.println("String is : "+s);
    }
}
class StringDemo
{
    public String str1;
    public String str2;
    public int iNo;
    
    public void Accept()
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the First String : ");
      str1=sobj.nextLine();
      System.out.println("Enter the Second String : ");
      str2=sobj.nextLine();
      System.out.println("Enter the value : ");
      iNo=sobj.nextInt();
    }
}
class Marvellous extends StringDemo
{
    public String StrNCat()
    {
        char ch1[]=str1.toCharArray();
        char ch2[]=str2.toCharArray();

        int i=ch1.length;
        int j=ch2[0];
        try
        {
        while(iNo!=0)
        {
            ch1[i]=ch2[j];
            i++;
            j++;
        }
       } 
       catch(Exception e)
       {}
       return String.valueOf(ch1);
    }
}