//Input: my name is amit School name is abhinav city name is pune
//output: 3

import java.util.*;

class StringX{
    public String WordCount(String str){
        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String Tokens[] = str.split(" ");
        int iCount=0;

        for(int i=0;i<Tokens.length;i++){
            if(Tokens[i].equals("name")){
                iCount++;
            }
        }
        System.out.println("Frequency of word is:"+iCount);

    }
}

class program749
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