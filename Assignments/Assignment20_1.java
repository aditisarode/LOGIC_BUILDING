
class Logic
{
    void ProductOfDigits(int iNo)
    {
        int iDigit = 0;
        int iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Product of digits is : " +iProduct);
    }   

}
class Assignment20_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.ProductOfDigits(234);
    }
}