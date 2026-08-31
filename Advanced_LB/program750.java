//Input: india is my country i live in india
//output: bharat is my country i live in bharat

import java.util.*;

class StringX{
    public String WordCount(String str){
        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");
        int iCount=0;

        for(int i=0;i<Tokens.length;i++){
            if(Tokens[i].equals("india")){
                iCount++;
            }
        }
        System.out.println("Frequency of word is:"+iCount);

    }
}

class program750
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        StringX strobj=new StringX();

        String sret=strobj.WordCount(str);

        System.out.println(sret);


    }
}