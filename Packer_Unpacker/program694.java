//Directory: Packer_Unpacker(folder)
import java.io.*;
import java.util.*;

class program694
{
    public static void main(String A[]) throws IOException
    {
        int iRet=0;

        Scanner sobj=new Scanner(System.in);
        String FolderName=null;
        String PackedFileName=null;

        FileOutputStream foobj=null;
        FileInputStream fiobj=null;

        System.out.println("Enter the folder name");
        FolderName=sobj.nextLine();

        System.out.println("Enter the name of packed file");
        PackedFileName=sobj.nextLine();

        File fobjfolder=new File(FolderName);

        if((fobjfolder.exists()) && (fobjfolder.isDirectory())){
            System.out.println("Folder exists");

            File fobjpack=new File(PackedFileName);
            fobjpack.createNewFile();//packed gets created

            foobj=new FileOutputStream(PackedFileName);

            File fArr[]=fobjfolder.listFiles();
            System.out.println("Number of files in the folder are : "+fArr.length);

            byte Buffer[]=new byte[1024];

            for(int i=0;i<fArr.length;i++)
            {
                fiobj=new FileInputStream(fArr[i]);
                //write file name and size
                // String fileName=fArr[i].getName();
                // long fileSize=fArr[i].length();
                
                // Logic for reading from fiobj and writing to foobj
                while((iRet=fiobj.read(Buffer))!=-1)
                {
                    foobj.write(Buffer,0,iRet);
                }
                fiobj.close();

            }
            foobj.close();
            sobj.close();
        }
        else{
            System.out.println("There is no such folder");
        }
    }
}