import java.util.*;

class Matrix<T>
{
    protected int Arr[][];
    protected T iRow;
    protected T iCol;

    public Matrix(int iRow, int iCol)
    {
        System.out.println("Inside Matrix Constructor");

        this.iRow = (T)(Integer)iRow;
        this.iCol = (T)(Integer)iCol;

        Arr = new int [iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of matrix :");

        for(int i = 0; i < (Integer)iRow; i++)
        {
            for(int j = 0; j < (Integer)iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

    }

    public void Display()
    {
        System.out.println("Elements of the matrix :");

        for(int i = 0; i < (Integer)iRow; i++)
        {
            for(int j = 0; j < (Integer)iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }

            System.out.println();
        }
    }
}

class MatrixLB<T> extends Matrix<T>
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow, iCol);
    }

    public int SummationAll()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < (Integer)iRow; i++)
        {
            for(j = 0; j < (Integer)iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return iSum;
    }

    public void SummationRow()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < (Integer)iRow; i++)
        {
            for(j = 0; j < (Integer)iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }

            System.out.println("Summation of row no : "+i+" is : "+iSum);
            iSum = 0;
        }
    }

    public int MaximumAll()
    {
        int iMax = 0;
        int i = 0, j = 0;

        iMax = Arr[0][0];

        for(i = 0; i < (Integer)iRow; i++)
        {
            for(j = 0; j < (Integer)iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }

        return iMax;
    }

    public int MinimumAll()
    {
        int iMin = 0;
        int i = 0, j = 0;

        iMin = Arr[0][0];

        for(i = 0; i < (Integer)iRow; i++)
        {
            for(j = 0; j < (Integer)iCol; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
        }

        return iMin;
    }

}

class program801
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;
        int i = 0, j = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        MatrixLB<Integer> mobj = new MatrixLB<Integer>(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.SummationAll();

        System.out.println("Summation of all elements : "+iRet);

        mobj.SummationRow();

        iRet = mobj.MaximumAll();

        System.out.println("Maximum element : "+iRet);

        iRet = mobj.MinimumAll();

        System.out.println("Minimum element : "+iRet);

        mobj = null;

        System.gc();
    }
}