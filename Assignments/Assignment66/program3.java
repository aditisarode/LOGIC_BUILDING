import java.io.*;
import java.util.*;

class program3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name : ");
        String filename = sobj.nextLine();

        File file = new File(filename);

        if(file.exists())
        {
            FileReader frobj = new FileReader(file);

            int ch;
            int iCharacters = 0;
            int iWords = 0;
            int iLines = 0;
            int iUppercase = 0;
            int iLowercase = 0;
            int iDigits = 0;
            int iSpaces = 0;
            int iInWord = 0;

            while((ch = frobj.read()) != -1)
            {
                iCharacters++;

                if(ch == '\n')
                {
                    iLines++;
                }

                if(ch == ' ')
                {
                    iSpaces++;
                }

                if(ch >= 'A' && ch <= 'Z')
                {
                    iUppercase++;
                }

                if(ch >= 'a' && ch <= 'z')
                {
                    iLowercase++;
                }

                if(ch >= '0' && ch <= '9')
                {
                    iDigits++;
                }

                if(ch != ' ' && ch != '\n' && ch != '\t')
                {
                    if(iInWord == 0)
                    {
                        iWords++;
                        iInWord = 1;
                    }
                }
                else
                {
                    iInWord = 0;
                }
            }

            if(iCharacters > 0 && iLines == 0)
            {
                iLines = 1;
            }

            frobj.close();

            System.out.println("\nFile : " + filename);
            System.out.println("\nCharacters : " + iCharacters);
            System.out.println("Words      : " + iWords);
            System.out.println("Lines      : " + iLines);
            System.out.println("Uppercase  : " + iUppercase);
            System.out.println("Lowercase  : " + iLowercase);
            System.out.println("Digits     : " + iDigits);
            System.out.println("Spaces     : " + iSpaces);
        }
        else
        {
            System.out.println("File does not exist");
        }

        sobj.close();
    }
}