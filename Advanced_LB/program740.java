//Camel Casting
//Input :My name is amit
//Output :My Name Is Amit

//Input :My NAME is AmIt
//Output :My Name Is Amit

import java.util.*;

class program740
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        str=str.toLowerCase();

        System.out.println(str);


    }
}