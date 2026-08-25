//Directory: Packer_Unpacker(folder)
import java.io.*;
import java.util.*;

class program690
{
    public static void main(String A[]) throws IOException
    {
        Scanner Sobj=new Scanner(System.in);
        String FolderName=null;
        String PackedFileName=null;

        System.out.println("Enter the folder name");
        FolderName=Sobj.nextLine();

        System.out.println("Enter the name of packed file");
        PackedFileName=Sobj.nextLine();

        File fobjfolder=new File(FolderName);

        if((fobjfolder.exists()) && (fobjfolder.isDirectory())){
            System.out.println("Folder exists");

            File fobjpack=new File(PackedFileName);
            fobjpack.createNewFile();//packed gets created
            File Arr[]=fobjfolder.listFiles();
            System.out.println("Number of files in the folder are : "+Arr.length);

            for(int i=0;i<Arr.length;i++)
            {
                //Logic

            }
        }
        else{
            System.out.println("There is no such folder");
        }
    }
}