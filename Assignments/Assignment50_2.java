import java.io.*;
import java.util.*;

class Assignment50_2
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);
        File output = new File("Marvellous1.txt");

        if(dir.exists() && dir.isDirectory())
        {
            output.createNewFile();

            FileWriter fwobj = new FileWriter(output);

            File files[] = dir.listFiles();

            for(File file : files)
            {
                if(file.isFile())
                {
                    fwobj.write(file.getName());
                    fwobj.write("\n");
                }
            }

            fwobj.close();

            System.out.println("File created Successfully");
        }
        else
        {
            System.out.println("Unable to open directory");
        }

        sobj.close();
    }
}