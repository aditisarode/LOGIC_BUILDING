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

            String parts[] = command.split(" ", 2);

            if(parts[0].equals("INFO"))
            {
                String filename = parts[1];

                File file = new File(filename);

                if(file.exists() && file.isFile())
                {
                    pw.println("File Name    : " + file.getName());
                    pw.println("Size         : " + file.length() + " bytes");
                    pw.println("Readable     : " + file.canRead());
                    pw.println("Writable     : " + file.canWrite());
                    pw.println("Absolute Path: " + file.getAbsolutePath());
                }
                else
                {
                    pw.println("File does not exist");
                }

                pw.println("END");
            }

            socket.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

class server5
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