import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            System.out.println(filename + " already exists");
        }
        else
        {
            if(file.createNewFile())
            {
                System.out.println(filename + " created successfully");
                System.out.println("Absolute path : " + file.getAbsolutePath());
            }
            else
            {
                System.out.println("File creation failed");
            }
        }

        sobj.close();
    }
}