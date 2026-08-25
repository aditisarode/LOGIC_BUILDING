import java.io.*;
import java.util.*;

class program678
{
    public static void main(String A[]) throws IOException
    {
        String Fname = null;
        File fobj=null;
        FileInputStream foobj=null;

        Scanner sobj = new Scanner(System.in);


        System.out.println("Enter the file name");
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        byte Arr[]=new byte[50];

        if(fobj.exists())
        {
            foobj=new FileInputStream(fobj);
            foobj.read(Arr);
            System.out.println(new String(Arr));
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}