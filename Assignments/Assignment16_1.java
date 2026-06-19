
class Logic
{
    void SumOfDigits(int iNum)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNum != 0)
        {
        iDigit = iNum % 10;
        iSum = iSum + iDigit;
        iNum = iNum / 10;
        }
        System.out.println("Sum of digits is :" +iSum);
    }

}
class Assignment16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}