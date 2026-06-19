
class Logic
{
    void DisplayFactors(int iNo)
    {
      int iCnt = 0;
      
      for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
      {
        if(iNo % iCnt == 0)
        {
            System.out.println(iCnt);
        }
      }   
    }   
}
class Assignment20_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayFactors(12);
    }
}