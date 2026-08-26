import java.io.*;
import java.util.*;

class Assignment48_2
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            System.out.println("File opened Successfully");

            FileReader frobj = new FileReader(file);
            BufferedReader brobj = new BufferedReader(frobj);

            String line;

            while((line = brobj.readLine()) != null)
            {
                System.out.println(line);
            }

            brobj.close();
            frobj.close();
        }
        else
        {
            System.out.println("Unable to open file");
        }

        sobj.close();
    }
}