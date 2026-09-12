import java.io.*;
import java.net.*;
import java.util.*;

class Client1
{
    public static void main(String A[]) throws Exception
    {
        Socket socket = new Socket("localhost", 5000);

        BufferedReader br = new BufferedReader(
            new InputStreamReader(socket.getInputStream()));

        PrintWriter pw = new PrintWriter(
            socket.getOutputStream(), true);

        Scanner sobj = new Scanner(System.in);

        while(true)
        {
            System.out.print("Enter command : ");
            String command = sobj.nextLine();

            pw.println(command);

            String result = br.readLine();

            System.out.println(result);

            if(command.equals("QUIT"))
            {
                break;
            }
        }

        socket.close();
        sobj.close();
    }
}