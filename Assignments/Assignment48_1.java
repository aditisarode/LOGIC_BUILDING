import java.io.*;
import java.util.*;

class Assignment48_1{

    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename=sobj.nextLine();

        File file=new File(filename);

        if(file.exists())
        {
            System.out.println("File opened Successfully");
        }
        else
        {
            System.out.println("Unable to open file");
        }
        
        sobj.close();
    }
}