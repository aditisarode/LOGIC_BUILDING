import java.io.*;
import java.util.*;

class Assignment48_4
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            System.out.println("File already exists");
        }
        else
        {
            file.createNewFile();

            System.out.println("File created Successfully");
        }

        sobj.close();
    }
}