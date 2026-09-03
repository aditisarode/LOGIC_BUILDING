import java.util.*;

class program760
{
    public static boolean CheckAnagram(String str1, String str2)
    {
        str1 = str1.trim();
        str1 = str1.replaceAll("\\s+", " ");
        str1 = str1.toLowerCase();

        str2 = str2.trim();
        str2 = str2.replaceAll("\\s+", " ");
        str2 = str2.toLowerCase();

        if(str1.length() != str2.length())
        {
            return false;
        }

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        int Frequency[] = new int[26];

        for(int i = 0; i < Arr.length; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Frequency[(int)Arr[i] - 97]++;
            }

            if(Brr[i] >= 'a' && Brr[i] <= 'z')
            {
                Frequency[(int)Brr[i] - 97]--;
            }
        }

        for(int i = 0; i < Frequency.length; i++)
        {
            if(Frequency[i] != 0)
            {
                return false;
            }
        }

        return true;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string:");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second string:");
        String str2 = sobj.nextLine();

        boolean bRet = CheckAnagram(str1, str2);

        if(bRet == true)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }
    }
}