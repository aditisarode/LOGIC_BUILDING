
class Logic
{
    void SumEvenNumbers(int iNo)
    {
       int iCnt = 0;
       int iEvenSum = 0;

       for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
         if(iCnt % 2 == 0)
         {
            iEvenSum = iEvenSum + iCnt;
         }
       }
       System.out.println("The sum is :" +iEvenSum);
    }
}
class Assignment19_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.SumEvenNumbers(10);
    }
}