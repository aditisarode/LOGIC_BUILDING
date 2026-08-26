import java.io.*;
import java.util.*;

class Assignment50_4
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sobj.nextLine();

        File dir = new File(dirname);
        File output = new File("Marvellous2.txt");

        if(dir.exists() && dir.isDirectory())
        {
            File files[] = dir.listFiles();

            FileOutputStream foobj = new FileOutputStream(output);

            for(File file : files)
            {
                if(file.isFile())
                {
                    System.out.println("Reading : " + file.getName());

                    foobj.write(("File Name : " + file.getName() + "\n").getBytes());

                    FileInputStream fiobj = new FileInputStream(file);

                    byte buffer[] = new byte[1024];

                    int bytes;

                    while((bytes = fiobj.read(buffer)) != -1)
                    {
                        foobj.write(buffer, 0, bytes);
                    }

                    foobj.write("\n\n".getBytes());

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