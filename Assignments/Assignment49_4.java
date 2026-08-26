import java.io.*;
import java.util.*;

class Assignment49_4
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            FileInputStream fiobj = new FileInputStream(file);

            int checksum = 0;
            int data;

            while((data = fiobj.read()) != -1)
            {
                checksum = checksum + data;
            }

            fiobj.close();

            System.out.println("Checksum is : " + checksum);
        }
        else
        {
            System.out.println("File does not exist");
        }

        sobj.close();
    }
}