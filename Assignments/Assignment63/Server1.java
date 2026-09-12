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

            String command;

            while((command = br.readLine()) != null)
            {
                String parts[] = command.split(" ");

                if(parts[0].equals("QUIT"))
                {
                    pw.println("Disconnected");
                    break;
                }

                if(parts.length != 3)
                {
                    pw.println("Invalid command");
                    continue;
                }

                String operation = parts[0];

                int no1 = Integer.parseInt(parts[1]);
                int no2 = Integer.parseInt(parts[2]);

                int result = 0;

                if(operation.equals("ADD"))
                {
                    result = no1 + no2;
                    pw.println("Result is : " + result);
                }
                else if(operation.equals("SUB"))
                {
                    result = no1 - no2;
                    pw.println("Result is : " + result);
                }
                else if(operation.equals("MULT"))
                {
                    result = no1 * no2;
                    pw.println("Result is : " + result);
                }
                else if(operation.equals("DIV"))
                {
                    if(no2 == 0)
                    {
                        pw.println("Division by zero is not allowed");
                    }
                    else
                    {
                        result = no1 / no2;
                        pw.println("Result is : " + result);
                    }
                }
                else if(operation.equals("MOD"))
                {
                    if(no2 == 0)
                    {
                        pw.println("Division by zero is not allowed");
                    }
                    else
                    {
                        result = no1 % no2;
                        pw.println("Result is : " + result);
                    }
                }
                else if(operation.equals("MAX"))
                {
                    result = Math.max(no1, no2);
                    pw.println("Maximum number is : " + result);
                }
                else if(operation.equals("MIN"))
                {
                    result = Math.min(no1, no2);
                    pw.println("Minimum number is : " + result);
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

class Server1
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