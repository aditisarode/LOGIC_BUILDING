import java.io.*;
import java.util.*;

class program703
{
    public static void main(String A[]) throws IOException
    {
        String header="    india   is   my   country    ";

        System.out.println(header.length());

        header=header.trim();

        System.out.println(header.length());

        header=header.replaceAll("  "," ");

        System.out.println(header.length());
    }
}