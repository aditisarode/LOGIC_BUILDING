import java.net.*;

class program918
{
    public static void main(String A[]) 
    {
        try
        {
            ServerSocket serversocket = new ServerSocket(9000);

            System.out.println("---------------------------------------------------");
            System.out.println("------------ Marvellous Server Started ------------");
            System.out.println("---------------------------------------------------");

            System.out.println("Server is waiting for client request");

            Socket clientsosocket = serversocket.accept();

            System.out.println("Client connected successfully");
        }
        catch(Exception e)
        {
            System.out.println("Exception Occurred : "+e);
        }
        
    }
}