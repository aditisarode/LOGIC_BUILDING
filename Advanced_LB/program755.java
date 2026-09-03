import java.util.*;

class program755
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");
        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        int Frequency[] = new int[26];

        // 97  98  99  100
        // a   b   c   d
        // 0   1   2   3

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Frequency[(int)Arr[i] - 97]++;
            }
        }

        System.out.println("Frequency of each letter is:");
        int iMax=0;
        char ch='\0';

        for(int i = 0; i < Frequency.length; i++)
        {
            if(Frequency[i] > iMax)
            {
                iMax=Frequency[i];
                ch=(char)(i+97);
            }
        }
        System.out.println("Maxiumum occured character is:"+ch+" with frequency:"+iMax);
    }
}