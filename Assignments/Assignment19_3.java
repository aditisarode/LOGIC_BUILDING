
class Logic
{
    void CheckPerfect(int iNo)
    {
       int iCnt = 0;
       int iFactSum = 0;

       for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
       {
         if(iNo % iCnt == 0)
         {
            iFactSum = iFactSum + iCnt;
         }
       }
       if(iFactSum == iNo)
       {
        System.out.println("The number is perfect");
       }
       else
       {
        System.out.println("The number is not perfect");
       }
    }
}
class Assignment19_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPerfect(6);
    }
}