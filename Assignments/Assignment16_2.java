
class Logic
{
    void CheckPalindrome(int iNum)
    {
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        iTemp = iNum;


        while(iNum != 0)
        {
        iDigit = iNum % 10;
        iRev = (iRev * 10) + iDigit;
        iNum = iNum / 10;
        }
        if(iRev == iTemp)
        {
            System.out.println("The number is palindrome");
        }
        else
        {
            System.out.println("The number is not palindrome");
        }
    }

}
class Assignment16_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckPalindrome(121);
    }
}