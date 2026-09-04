import java.util.*;

class program772
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(char ch : Arr)                   // for each loop 
        {
            System.out.println(ch);
        }
    }
}