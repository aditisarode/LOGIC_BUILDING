
class Logic
{
    void CheckDivisible(int iNum)
    {
     if((iNum % 5 == 0) && (iNum % 11 == 0))
        {
            System.out.println("The number is divisible by 5 and 11");
        }  
     else
        {
            System.out.println("The number is not divisible by 5 and 11");
        } 
       
    }

}
class Assignment18_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckDivisible(55);
    }
}