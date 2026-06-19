
class Logic
{
    void SumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit; 
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Sum of even digits :" +iEvenSum);
        System.out.println("Sum of odd digits :" +iOddSum);
       
    }

}
class Assignment17_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenOddDigits(123456);
    }
}