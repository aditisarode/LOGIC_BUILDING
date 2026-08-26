import java.io.*;
import java.util.*;

class Assignment48_3
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

            System.out.print("Enter data: ");
            String data = sobj.nextLine();

            FileWriter fwobj = new FileWriter(file, true);

            fwobj.append(data);
            fwobj.append("\n");

            fwobj.close();

            System.out.println("Data appended Successfully");
        }
        else
        {
            System.out.println("Unable to open file");
        }

        sobj.close();
    }
}