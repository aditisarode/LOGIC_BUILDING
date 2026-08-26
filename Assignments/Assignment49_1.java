import java.io.*;
import java.util.*;

class Assignment49_1
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file name: ");
        String source = sobj.nextLine();

        System.out.print("Enter destination file name: ");
        String destination = sobj.nextLine();

        File file1 = new File(source);
        File file2 = new File(destination);

        if(file1.exists())
        {
            file2.createNewFile();

            FileReader frobj = new FileReader(file1);
            FileWriter fwobj = new FileWriter(file2);

            int ch;

            while((ch = frobj.read()) != -1)
            {
                fwobj.write(ch);
            }

            frobj.close();
            fwobj.close();

            System.out.println("Data copied Successfully");
        }
        else
        {
            System.out.println("Source file does not exist");
        }

        sobj.close();
    }
}