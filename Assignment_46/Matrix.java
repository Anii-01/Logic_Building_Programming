
package matrix;
import java.util.*;

public class Matrix 
{
    protected int Arr[][];

    public Matrix(int A , int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null ;
    }

    public void Accept()
    {
        Scanner sc = new Scanner (System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter the elements : ");
        
        for(int i = 0; i < Arr.length ; i++)
        {
            for(int j = 0; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sc.nextInt();
            }
        }
    }

    public void Display()
    {
        int iRow = 0 , iCol = 0;

        System.out.println("Entered elements are : ");
        for(int i = 0; i < Arr.length ; i++)
        {
            for(int j = 0; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
}
