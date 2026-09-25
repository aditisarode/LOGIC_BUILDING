import java.io.*;
import java.util.*;

class program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory : ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            System.out.println("Contents:");

            File files[] = dir.listFiles();

            for(File file : files)
            {
                System.out.println(file.getName());
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}