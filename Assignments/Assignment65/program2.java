import java.io.*;
import java.util.*;

class program2
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            FileInputStream fiobj = new FileInputStream(file);

            int ch;

            System.out.println("File contents:");

            while((ch = fiobj.read()) != -1)
            {
                System.out.print((char)ch);
            }

            fiobj.close();
        }
        else
        {
            System.out.println("File does not exist");
        }

        sobj.close();
    }
}