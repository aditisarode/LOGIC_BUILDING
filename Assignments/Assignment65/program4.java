import java.io.*;
import java.util.*;

class program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            System.out.println("File Name    : " + file.getName());
            System.out.println("Absolute Path : " + file.getAbsolutePath());
            System.out.println("File Size    : " + file.length() + " bytes");
            System.out.println("Readable     : " + file.canRead());
            System.out.println("Writable     : " + file.canWrite());
            System.out.println("Hidden       : " + file.isHidden());
            System.out.println("Last Modified : " + file.lastModified());
        }
        else
        {
            System.out.println("File does not exist");
        }

        sobj.close();
    }
}