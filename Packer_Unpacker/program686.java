//Directory: Packer_Unpacker(folder)
import java.io.*;
import java.util.*;

class program686
{
    public static void main(String A[]) throws IOException
    {
        Scanner Sobj=new Scanner(System.in);
        String FolderName=null;

        System.out.println("Enter the folder name");
        FolderName=Sobj.nextLine();

        File fobj=new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory())){//handled here to check whether it is folder or file
            System.out.println("Folder exists");
        }
        else{
            System.out.println("There is no such folder");
        }
    }
}