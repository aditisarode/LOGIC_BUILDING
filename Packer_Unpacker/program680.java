import java.io.*;
import java.util.*;

class program680
{
    public static void main(String A[]) throws IOException
    {
        String Fname = null;
        int iRet = 0;
        File fobj = null;
        FileInputStream fiobj = null;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name");
        Fname = sobj.nextLine();

        fobj = new File(Fname);

        byte Buffer[] = new byte[50];

        if(fobj.exists())
        {
            String str = null;
            fiobj = new FileInputStream(fobj);
            
            while((iRet = fiobj.read(Buffer)) != -1)
            {
                str = new String(Buffer);
                System.out.print(str);
            }
        }
        else
        {
            System.out.println("There is no such file");
        }
    }
}