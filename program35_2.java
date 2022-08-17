/*
2. Write a program which 2 strings from user and check whether 
contents of two strings are equal or not.
Input : “Marvellous Infosystems”
“Marvellous Infosystems”
Output : TRUE
 */
import java.util.Scanner;
class program35_2 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str1,str2;
        boolean bRet=false;

        System.out.println("Enter the First String : ");
        str1=sobj.nextLine();
        System.out.println("Enter the Second String : ");
        str2=sobj.nextLine();
        
        StringDemo sdobj = new StringDemo();
        bRet=sdobj.StrCmpX(str1,str2);
        if(bRet==true)
        {
            System.out.println("Strings are equal");
        }
        else
        {
            System.out.println("String are Not equal");
        }
    }
    
}
class StringDemo
{
    public boolean StrCmpX(String src,String dest)
    {
        if(src.equals(dest))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}