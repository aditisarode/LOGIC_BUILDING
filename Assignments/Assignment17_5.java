
class Logic
{
    void CheckSign(int iNum)
    {
        if(iNum > 0)
        {
            System.out.println("The number is positive");
        }
        else if(iNum == 0)
        {
            System.out.println("The number is zero");
        }
        else
        {
            System.out.println("The number is negative");
        }
        
       
    }

}
class Assignment17_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckSign(-8);
    }
}