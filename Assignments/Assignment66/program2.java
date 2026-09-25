import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory : ");
        String dirname = sobj.nextLine();

        System.out.print("Enter file to search : ");
        String filename = sobj.nextLine();

        File dir = new File(dirname);
        File file = new File(dir, filename);

        if(dir.exists() && dir.isDirectory())
        {
            if(file.exists() && file.isFile())
            {
                System.out.println("\nFile found");
                System.out.println("\nName : " + file.getName());
                System.out.println("Size : " + file.length() + " bytes");
                System.out.println("Path : " + file.getAbsolutePath());
            }
            else
            {
                System.out.println("\n" + filename + " not found");
            }
        }
        else
        {
            System.out.println("Invalid directory");
        }

        sobj.close();
    }
}