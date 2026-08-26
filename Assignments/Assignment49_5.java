import java.io.*;
import java.util.*;

class Assignment49_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println(file.getName() + " : " + file.length() + " bytes");
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