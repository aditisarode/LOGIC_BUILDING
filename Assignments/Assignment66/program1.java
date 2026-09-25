import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory : ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);

        if(dir.exists() && dir.isDirectory())
        {
            File files[] = dir.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println("[FILE] " + file.getName() + "       " + file.length() + " bytes");
                }
                else if(file.isDirectory())
                {
                    System.out.println("[DIR]  " + file.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}