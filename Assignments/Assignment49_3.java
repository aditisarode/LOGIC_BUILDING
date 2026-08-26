import java.io.*;
import java.util.*;

class Assignment49_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);

        if(dir.mkdir())
        {
            System.out.println("Directory created Successfully");
        }
        else
        {
            System.out.println("Unable to create directory");
        }

        sobj.close();
    }
}