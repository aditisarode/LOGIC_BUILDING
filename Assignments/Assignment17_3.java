
class Logic
{
    void PrintOddNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
    
        }
       
    }

}
class Assignment17_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintOddNumbers(20);
    }
}