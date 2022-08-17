/*
4. Accept sing from user and reverse the contents of that string 
by toggling the case.
Input : “aCBdef”
Output : “FEDcbA”
 */
import java.util.Scanner;
class program35
{
    public static void main(String arg[])
    {
      String s;

      Marvellous mobj = new Marvellous();
      mobj.Accept();
      
      s=mobj.StrRevTogX();
      System.out.println("String is : "+s);

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
    public String StrRevTogX()
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

        for(i=0;i<ch.length;i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                ch[i]=Character.toUpperCase(ch[i]);
            }
            else if(ch[i]>='A' && ch[i]<='Z')
            {
                ch[i]=Character.toLowerCase(ch[i]);
            }
        }
        return String.valueOf(ch);
    }

}