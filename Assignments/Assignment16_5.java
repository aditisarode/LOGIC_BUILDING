
class Logic
{
    void PrintTable(int iNum)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNum * iCnt);
        }    
    }

}
class Assignment16_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintTable(5);
    }
}