import java.io.*;
import java.net.*;

class ClientHandler extends Thread
{
    Socket socket;

    ClientHandler(Socket socket)
    {
        this.socket = socket;
    }

    int Vowels(String str)
    {
        int iCount = 0;

        for(int i = 0; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                iCount++;
            }
        }

        return iCount;
    }

    String Reverse(String str)
    {
        String result = "";

        for(int i = str.length() - 1; i >= 0; i--)
        {
            result = result + str.charAt(i);
        }

        return result;
    }

    boolean Palindrome(String str)
    {
        String result = Reverse(str);

        if(str.equals(result))
        {
            return true;
        }

        return false;
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
                String parts[] = command.split(" ", 2);

                if(parts.length != 2)
                {
                    pw.println("Invalid command");
                    continue;
                }

                String operation = parts[0];
                String str = parts[1];

                if(operation.equals("LENGTH"))
                {
                    pw.println("Length is : " + str.length());
                }
                else if(operation.equals("UPPER"))
                {
                    pw.println(str.toUpperCase());
                }
                else if(operation.equals("LOWER"))
                {
                    pw.println(str.toLowerCase());
                }
                else if(operation.equals("REVERSE"))
                {
                    pw.println(Reverse(str));
                }
                else if(operation.equals("PALINDROME"))
                {
                    if(Palindrome(str))
                    {
                        pw.println("Palindrome");
                    }
                    else
                    {
                        pw.println("Not Palindrome");
                    }
                }
                else if(operation.equals("VOWELS"))
                {
                    pw.println("Number of vowels : " + Vowels(str));
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