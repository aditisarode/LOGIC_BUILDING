import java.io.*;
import java.util.*;

class Assignment49_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file");
        }

        sobj.close();
    }
}