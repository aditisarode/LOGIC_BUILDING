import java.io.*;
import java.util.*;

class program701
{
    public static void main(String A[]) throws IOException
    {
        String header="marvellous";

        System.out.println(header);

        header=header.replaceAll("l","L");//as strings so " "used//Issue->Resolved

        System.out.println(header);

    }
}