import java.util.*;

class Assignment56_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int R = sobj.nextInt();
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int seats[][] = new int[R][C];

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                seats[i][j] = sobj.nextInt();

                if(seats[i][j] != 0 && seats[i][j] != 1)
                {
                    System.out.println("Invalid Input");
                    sobj.close();
                    return;
                }
            }
        }

        int totalBooked = 0;
        int maximum = 0;
        int maximumRow = 0;
        boolean fullRow = false;

        for(int i = 0; i < R; i++)
        {
            int count = 0;

            for(int j = 0; j < C; j++)
            {
                if(seats[i][j] == 1)
                {
                    totalBooked++;
                    count++;
                }
            }

            if(count > maximum)
            {
                maximum = count;
                maximumRow = i;
            }

            if(count == C)
            {
                fullRow = true;
            }
        }

        System.out.println("Total Booked Seats: " + totalBooked);
        System.out.println("Row With Maximum Bookings: Row " + (maximumRow + 1));

        if(fullRow)
        {
            System.out.println("Full Row Exists: Yes");
        }
        else
        {
            System.out.println("Full Row Exists: No");
        }

        sobj.close();
    }
}