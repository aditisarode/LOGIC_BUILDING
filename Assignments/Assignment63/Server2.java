import java.io.*;
import java.net.*;

class ClientHandler extends Thread
{
    Socket socket;

    ClientHandler(Socket socket)
    {
        this.socket = socket;
    }

    int Even(int iNo)
    {
        if(iNo % 2 == 0)
        {
            return 1;
        }

        return 0;
    }

    int Odd(int iNo)
    {
        if(iNo % 2 != 0)
        {
            return 1;
        }

        return 0;
    }

    int Prime(int iNo)
    {
        int iCount = 0;

        for(int i = 1; i <= iNo; i++)
        {
            if(iNo % i == 0)
            {
                iCount++;
            }
        }

        return iCount;
    }

    int Perfect(int iNo)
    {
        int iSum = 0;

        for(int i = 1; i < iNo; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }

        return iSum;
    }

    int Factorial(int iNo)
    {
        int iFact = 1;

        for(int i = 1; i <= iNo; i++)
        {
            iFact = iFact * i;
        }

        return iFact;
    }

    int Reverse(int iNo)
    {
        int iReverse = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = iReverse * 10 + iDigit;
            iNo = iNo / 10;
        }

        return iReverse;
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

                if(parts.length != 2)
                {
                    pw.println("Invalid command");
                    continue;
                }

                String operation = parts[0];
                int iNo = Integer.parseInt(parts[1]);

                if(operation.equals("EVEN"))
                {
                    if(Even(iNo) == 1)
                    {
                        pw.println(iNo + " is Even Number");
                    }
                    else
                    {
                        pw.println(iNo + " is Not Even Number");
                    }
                }
                else if(operation.equals("ODD"))
                {
                    if(Odd(iNo) == 1)
                    {
                        pw.println(iNo + " is Odd Number");
                    }
                    else
                    {
                        pw.println(iNo + " is Not Odd Number");
                    }
                }
                else if(operation.equals("PRIME"))
                {
                    if(Prime(iNo) == 2)
                    {
                        pw.println(iNo + " is a Prime Number");
                    }
                    else
                    {
                        pw.println(iNo + " is Not a Prime Number");
                    }
                }
                else if(operation.equals("PERFECT"))
                {
                    if(Perfect(iNo) == iNo)
                    {
                        pw.println(iNo + " is a Perfect Number");
                    }
                    else
                    {
                        pw.println(iNo + " is Not a Perfect Number");
                    }
                }
                else if(operation.equals("FACTORIAL"))
                {
                    pw.println("Factorial is : " + Factorial(iNo));
                }
                else if(operation.equals("REVERSE"))
                {
                    pw.println("Reverse is : " + Reverse(iNo));
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