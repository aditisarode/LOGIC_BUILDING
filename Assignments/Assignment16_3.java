
class Logic
{
    void FindMax(int a, int b)
    {
        if(a > b)
        {
            System.out.println(a+ " is maximum");
        }
        else
        {
            System.out.println(b+ "is maximum");
        }
        
    }

}
class Assignment16_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMax(20, 15);
    }
}