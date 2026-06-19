
class Logic
{
    void FindMin(int a, int b, int c)
    {
        int iMin = a;

        if(b < iMin)
        {
            iMin = b;
        }
        if(c < iMin)
        {
            iMin = c;
        }
        System.out.println(iMin+ " is minimum");
        
    }

}
class Assignment16_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindMin(3, 7, 2);
    }
}