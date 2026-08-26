import java.io.*;
import java.util.*;

class Assignment48_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            System.out.println("Files in directory:");

            File files[] = dir.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName());
                }
            }
        }
        else
        {
            System.out.println("Unable to open directory");
        }

        sobj.close();
    }
}