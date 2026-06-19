
class Logic
{
    void PrintReverse(int iNo)
    {
       int iCnt = 0;

       for(iCnt = iNo; iCnt >= 1; iCnt--)
       {
         System.out.println(iCnt);
       }
    }
}
class Assignment19_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintReverse(10);
    }
}