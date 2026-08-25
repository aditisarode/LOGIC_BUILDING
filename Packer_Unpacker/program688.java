//Directory: Packer_Unpacker(folder)
import java.io.*;
import java.util.*;

class program688
{
    public static void main(String A[]) throws IOException
    {
        Scanner Sobj=new Scanner(System.in);
        String FolderName=null;

        System.out.println("Enter the folder name");
        FolderName=Sobj.nextLine();

        File fobj=new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory())){
            System.out.println("Folder exists");

            File Arr[]=fobj.listFiles();
            System.out.println("Number of files in the folder are : "+Arr.length);

            for(int i=0;i<Arr.length;i++)
            {
                System.out.println("File name is : "+Arr[i].getName());//this will not traverse the subfolders, it will only display the files in the current folder
            }
        }
        else{
            System.out.println("There is no such folder");
        }
    }
}