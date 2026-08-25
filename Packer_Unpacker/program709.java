import java.io.*;
import java.util.*;

class program709
{
    public static void main(String A[]) throws IOException
    {
        String header="india is my country";

        System.out.println(header.length());

        String Arr[]=header.split(" ");//tokens

        System.out.println("Number of words are: "+Arr.length);
    }
}