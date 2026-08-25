import java.io.*;
import java.util.*;

class program699
{
    public static void main(String A[]) throws IOException
    {
        String header="    india  is  my  country    ";

        System.out.println(header.length());

        header=header.trim();//ISSUE -> Resolved (trim->in between spaces are note removed)

        System.out.println(header.length());

    }
}