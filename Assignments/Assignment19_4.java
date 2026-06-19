
class Logic
{
    void FindLargestDigit(int iNo)
    {
        int iDigit = 0;
        int iLargestDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLargestDigit)
            {
                iLargestDigit = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Largest Digit is :" +iLargestDigit);
    }   

}
class Assignment19_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindLargestDigit(83429);
    }
}