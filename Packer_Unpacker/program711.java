import java.io.*;
import java.util.*;

class program711
{
    public static void main(String A[]) throws IOException
    {
        String header="india  is  my  country";

        System.out.println(header.length());

        String Arr[]=header.split(" ");

        System.out.println("Number of words are: "+Arr.length);

        for(int i=0;i<Arr.length;i++){
            System.out.println(Arr[i]);
        }
    }
}