
import java.util.*;
import matrix.Matrix;


public class Assignment_46 extends Matrix
{
    public Assignment_46(int A , int B)
    {
        super(A,B);
    }

    public int DiagonalSum()
    {
        int i = 0 , j = 0;
        int iSum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public int CountFrequency(int no)
    {
        int i = 0, j = 0;
        int Frequency = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j <Arr[i].length ; j++)
            {
                if(Arr[i][j] == no)
                {
                    Frequency ++;
                }
            }
        }
        return Frequency;
    }

    public int LargeFromBothDiagonal() 
    {
        int largest = Arr[0][0];
    
        // First diagonal
        for (int i = 0; i < Arr.length; i++) {
            if (Arr[i][i] > largest) 
            {
                largest = Arr[i][i];
            }
        }
    
        // Second diagonal
        for (int i = 0; i < Arr.length; i++) {
            int j = Arr.length - 1 - i;
            if (Arr[i][j] > largest)
            {
                largest = Arr[i][j];
            }
        }
        return largest;
    }

    
    public void ColumnSum()
    {
        int i = 0, j = 0;
        int Sum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j <Arr[i].length ; j++)
            {
                Sum = Sum + Arr[j][i];
            }
            System.out.print(Sum+"\t");
            Sum = 0;
        }
        System.out.println();
    }

    public void SwapConsecutiveRows() 
    {
        int temp;
    
        for (int i = 0; i < Arr.length - 1; i += 2) 
        {
            for (int j = 0; j < Arr[i].length; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i + 1][j];
                Arr[i + 1][j] = temp;
            }
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of Rows : ");
        iRow = sc.nextInt();

        System.out.println("Enter number of Col : ");
        iCol = sc.nextInt();

        Assignment_46 obj = new Assignment_46(iRow, iCol);

        obj.Accept();
        obj.Display();

        int iRet1 = 0;
        iRet1 = obj.DiagonalSum();
        System.out.println("Addition of Diagonal elements is : "+iRet1);
        System.out.println();

        System.out.println("Which number frequency wants : ");
        int iValue = 0;
        int iRet2 = 0;
        iValue = sc.nextInt();
        iRet2 = obj.CountFrequency(iValue);
        System.out.println("The Frequency of number is : "+iRet2);
        System.out.println();

        int iRet3 = 0;
        iRet3 = obj.LargeFromBothDiagonal();
        System.out.println("Largest element from both the diagonal is : "+iRet3);
        System.out.println();

        System.out.println("The Sum of each column is : ");
        obj.ColumnSum();

        obj.Display();
        System.out.println("After swaping the consecutive rows : ");
        obj.SwapConsecutiveRows();
        obj.Display();

    }
}
