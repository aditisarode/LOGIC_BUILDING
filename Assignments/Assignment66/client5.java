import java.io.*;
import java.net.*;
import java.util.*;

class client5
{
    public static void main(String A[]) throws Exception
    {
        Socket socket = new Socket("localhost", 5000);

        BufferedReader br = new BufferedReader(
            new InputStreamReader(socket.getInputStream()));

        PrintWriter pw = new PrintWriter(
            socket.getOutputStream(), true);

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter command : ");
        String command = sobj.nextLine();

        pw.println(command);

        String result;

        while((result = br.readLine()) != null)
        {
            if(result.equals("END"))
            {
                break;
            }

            System.out.println(result);
        }

        socket.close();
        sobj.close();
    }
}