import java.util.*;

class program267
{
    public static void main(String A[])
    {
      Scanner sobj = new Scanner(System.in);
      String str = new String();                // If we take 10 inside string() then it gives error             

      System.out.println(str.length());

      System.out.println("Enter string :");
      str = sobj.nextLine();

      System.out.println("String is :" +str);

      System.out.println(str.length());

      
    }
}
