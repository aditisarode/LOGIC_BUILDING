
class Logic
{
    void CheckLeapYear(int iYear)
    {
        if((iYear % 400 == 0) || ((iYear % 4 == 0 ) && (iYear % 100 != 0)))
        {
            System.out.println("The year is leap year");
        }
        else
        {
            System.out.println("The year is not leap year");
        }
    }

}
class Assignment18_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.CheckLeapYear(2024);
    }
}