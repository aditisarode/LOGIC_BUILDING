import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter source file : ");
        String source = sobj.nextLine();

        System.out.print("Enter destination file : ");
        String destination = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(source);
        FileOutputStream foobj = new FileOutputStream(destination);

        int ch;

        while((ch = fiobj.read()) != -1)
        {
            foobj.write(ch);
        }

        fiobj.close();
        foobj.close();

        System.out.println("File copied successfully");

        sobj.close();
    }
}