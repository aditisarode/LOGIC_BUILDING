
class Logic
{
    void CountEvenOddRange(int iNo)
    {
        int iCnt = 0;
        int iCountEven = 0;
        int iCountOdd = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        System.out.println("The count of even numbers: " +iCountEven);
        System.out.println("The count of odd numbers: " +iCountOdd); 
    }   

}
class Assignment20_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountEvenOddRange(50);
    }
}