
class Logic
{
    void CheckPrime(int iNum)
    {
        int iCnt = 0;

        if(iNum < 2)
        {
            System.out.println("The number is not prime");
            return;
        }

        for(iCnt = 2; iCnt <= (iNum/2); iCnt++)
        {
            if(iNum % iCnt == 0)
            {
                break;
            }
        }
        if(iCnt > (iNum/2))
        {
            System.out.println("The number is prime");
        }
        else
        {
            System.out.println("The number is not prime");
        }
    }

}
class Assignment17_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPrime(11);
    }
}