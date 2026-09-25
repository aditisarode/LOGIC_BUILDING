import java.io.*;
import java.util.*;

class program1
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String filename = sobj.nextLine();

        System.out.print("Enter data : ");
        String data = sobj.nextLine();

        FileOutputStream foobj = new FileOutputStream(filename);

        foobj.write(data.getBytes());

        foobj.close();

        System.out.println("Data written successfully");

        sobj.close();
    }
}