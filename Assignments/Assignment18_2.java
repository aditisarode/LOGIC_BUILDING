
class Logic
{
    void DisplayGrade(int iMarks)
    {
        if((iMarks >= 80) && (iMarks <= 100))
        {
            System.out.println("A Grade");
        }
        else if((iMarks >= 60) && (iMarks < 80))
        {
            System.out.println("B Grade");
        }
        else if((iMarks >= 40) && (iMarks < 60))
        {
            System.out.println("C Grade");
        }
        else if((iMarks >= 35) && (iMarks < 40))
        {
            System.out.println("D Grade");
        }
        else
        {
            System.out.println("Fail");
        }
       
    }

}
class Assignment18_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.DisplayGrade(82);
    }
}