
class Logic
{
    void PrintDivisibleBy2and3(int iNo)
    {
      int iCnt = 0;
      
      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        if((iCnt % 2 == 0) && (iCnt % 3 == 0))
        {
            System.out.println(iCnt);
        }
        
      }
         
    }   
}
class Assignment20_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.PrintDivisibleBy2and3(30);
    }
}