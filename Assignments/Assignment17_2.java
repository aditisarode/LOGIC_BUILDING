
class Logic
{
    void PrintEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
    
        }
       
    }

}
class Assignment17_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintEvenNumbers(20);
    }
}