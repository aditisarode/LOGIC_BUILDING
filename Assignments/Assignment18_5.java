
class Logic
{
    void CalculatePower(int iBase, int iExp)
    {
       int iCnt = 0;
       int iPower = 1;

       for(iCnt = 1; iCnt <= iExp; iCnt++)
       {
        iPower = iPower * iBase;
       }
       System.out.println("Power is :" +iPower);
    }
}
class Assignment18_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CalculatePower(2, 5);
    }
}