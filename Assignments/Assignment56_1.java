import java.util.*;

class Assignment56_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int N = sobj.nextInt();

        System.out.print("Enter number of subjects: ");
        int M = sobj.nextInt();

        if(N <= 0 || M <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int marks[][] = new int[N][M];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                marks[i][j] = sobj.nextInt();

                if(marks[i][j] < 0 || marks[i][j] > 100)
                {
                    System.out.println("Invalid Input");
                    sobj.close();
                    return;
                }
            }
        }

        int total[] = new int[N];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                total[i] = total[i] + marks[i][j];
            }
        }

        int topper = 0;

        for(int i = 1; i < N; i++)
        {
            if(total[i] > total[topper])
            {
                topper = i;
            }
        }

        double average[] = new double[M];

        for(int j = 0; j < M; j++)
        {
            for(int i = 0; i < N; i++)
            {
                average[j] = average[j] + marks[i][j];
            }

            average[j] = average[j] / N;
        }

        System.out.println();
        System.out.println("Student Totals:");

        for(int i = 0; i < N; i++)
        {
            System.out.println("Student " + (i + 1) + ": " + total[i]);
        }

        System.out.println();
        System.out.println("Topper: Student " + (topper + 1));

        System.out.println();
        System.out.println("Subject Averages:");

        for(int j = 0; j < M; j++)
        {
            System.out.printf("Subject %d: %.2f%n", (j + 1), average[j]);
        }

        System.out.println();
        System.out.println("Students Failed:");

        for(int i = 0; i < N; i++)
        {
            boolean failed = false;

            for(int j = 0; j < M; j++)
            {
                if(marks[i][j] < 35)
                {
                    failed = true;
                    break;
                }
            }

            if(failed)
            {
                System.out.println("Student " + (i + 1));
            }
        }

        sobj.close();
    }
}