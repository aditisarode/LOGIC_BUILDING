import java.io.*;
import java.net.*;

class ClientHandler extends Thread
{
    Socket socket;

    ClientHandler(Socket socket)
    {
        this.socket = socket;
    }

    public void run()
    {
        try
        {
            BufferedReader br = new BufferedReader(
                new InputStreamReader(socket.getInputStream()));

            PrintWriter pw = new PrintWriter(
                socket.getOutputStream(), true);

            String command = br.readLine();

            System.out.println("Command received : " + command);

            if(command.startsWith("EXISTS "))
            {
                String filename = command.substring(7);

                File file = new File(filename);

                System.out.println("Checking file : " + file.getAbsolutePath());

                if(file.exists() && file.isFile())
                {
                    pw.println(filename + " exists on server");
                }
                else
                {
                    pw.println(filename + " does not exist");
                }
            }
            else
            {
                pw.println("Invalid command");
            }

            socket.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class server4
{
    public static void main(String A[]) throws Exception
    {
        ServerSocket ss = new ServerSocket(5000);

        System.out.println("Server started...");
        System.out.println("Waiting for client...");

        while(true)
        {
            Socket socket = ss.accept();

            System.out.println("Client connected");

            ClientHandler obj = new ClientHandler(socket);
            obj.start();
        }
    }
}