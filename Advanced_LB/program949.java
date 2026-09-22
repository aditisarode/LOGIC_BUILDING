
class program949
{
    public static void main(String A[])
    {
        int Ans = 0;

        if(A.length != 2)
        {
            System.out.println("Invalid number of arguments");
            return;
        }

        //Ans = A[0] + A[1];    // Error

        System.out.println("Addition is : "+(A[0] + A[1]));
    }
}