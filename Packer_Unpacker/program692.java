//Directory: Packer_Unpacker(folder)
import java.io.*;
import java.util.*;

class program692
{
    public static void main(String A[]) throws IOException
    {
        Scanner Sobj=new Scanner(System.in);
        String FolderName=null;
        String PackedFileName=null;

        FileOutputStream foobj=null;
        FileInputStream fiobj=null;

        System.out.println("Enter the folder name");
        FolderName=Sobj.nextLine();

        System.out.println("Enter the name of packed file");
        PackedFileName=Sobj.nextLine();

        File fobjfolder=new File(FolderName);

        if((fobjfolder.exists()) && (fobjfolder.isDirectory())){
            System.out.println("Folder exists");

            File fobjpack=new File(PackedFileName);
            fobjpack.createNewFile();//packed gets created

            foobj=new FileOutputStream(PackedFileName);

            File fArr[]=fobjfolder.listFiles();
            System.out.println("Number of files in the folder are : "+fArr.length);

            for(int i=0;i<fArr.length;i++)
            {
                fiobj=new FileInputStream(fArr[i]);
                //write file name and size
                String fileName=fArr[i].getName();
                long fileSize=fArr[i].length();
                
                // Logic for reading from fiobj and writing to foobj
                int ch;
                while((ch=fiobj.read())!=-1)
                {
                    foobj.write(ch);
                }
                fiobj.close();

            }
        }
        else{
            System.out.println("There is no such folder");
        }
    }
}