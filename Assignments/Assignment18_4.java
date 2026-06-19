
class Logic
{
    void PrintDigits(int iNum)
    {
        int iDigit = 0;

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            System.out.println(iDigit);
            iNum = iNum / 10;
        }
    }
}
class Assignment18_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintDigits(9876);
    }
}