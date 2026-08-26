import java.io.*;
import java.util.*;

class Assignment50_3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);
        File output = new File("Marvellous.txt");

        if(dir.exists() && dir.isDirectory())
        {
            File files[] = dir.listFiles();

            FileOutputStream foobj = new FileOutputStream(output);

            for(File file : files)
            {
                if(file.isFile() && !file.getName().equals("Marvellous.txt"))
                {
                    System.out.println("Reading : " + file.getName());

                    FileInputStream fiobj = new FileInputStream(file);

                    int data;

                    while((data = fiobj.read()) != -1)
                    {
                        foobj.write(data);
                    }

                    fiobj.close();

                    System.out.println("Completed : " + file.getName());
                }
            }

            foobj.close();

            System.out.println("File created Successfully");
        }
        else
        {
            System.out.println("Unable to open directory");
        }

        sobj.close();
    }
}