
class Logic
{
    void CountFactors(int iNo)
    {
      int iCnt = 0;
      int iCountFact = 0;
      
      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        if(iNo % iCnt == 0)
        {
            iCountFact++;
        }
      }
         System.out.println("The total number of factors :" +iCountFact);
    }   
}
class Assignment20_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CountFactors(20);
    }
}