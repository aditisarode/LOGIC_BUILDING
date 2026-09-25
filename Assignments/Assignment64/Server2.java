import java.io.*;
import java.net.*;
import java.time.*;

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

            String command;

            while((command = br.readLine()) != null)
            {
                if(command.equals("DATE"))
                {
                    pw.println(LocalDate.now());
                }
                else if(command.equals("TIME"))
                {
                    pw.println(LocalTime.now());
                }
                else if(command.equals("SERVERNAME"))
                {
                    pw.println(InetAddress.getLocalHost().getHostName());
                }
                else if(command.equals("HELP"))
                {
                    pw.println("Available Commands:");
                    pw.println("DATE");
                    pw.println("TIME");
                    pw.println("SERVERNAME");
                    pw.println("HELP");
                    pw.println("QUIT");
                }
                else if(command.equals("QUIT"))
                {
                    pw.println("Disconnected");
                    break;
                }
                else
                {
                    pw.println("Invalid command");
                }
            }

            socket.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class Server2
{
    public static void main(String A[]) throws Exception
    {
        ServerSocket ss = new ServerSocket(5000);

        System.out.println("Server started...");
        System.out.println("Waiting for clients...");

        while(true)
        {
            Socket socket = ss.accept();

            System.out.println("Client connected");

            ClientHandler obj = new ClientHandler(socket);
            obj.start();
        }
    }
}