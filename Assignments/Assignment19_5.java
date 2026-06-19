
class Logic
{
    void FindSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iSmallestDigit = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmallestDigit)
            {
                iSmallestDigit = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Smallest Digit is :" +iSmallestDigit);
    }   

}
class Assignment19_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.FindSmallestDigit(45872);
    }
}