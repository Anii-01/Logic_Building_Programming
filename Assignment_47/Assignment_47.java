
import java.util.*;
import matrix1.Matrix;


public class Assignment_47 extends Matrix
{
    public Assignment_47(int A , int B)
    {
        super(A,B);
    }

    public void TransposeSquare()
    {
        int i = 0, j = 0;
        int temp;

        System.out.println("The Transpose of Squarematrix is : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = i ; j < Arr[i].length ; j++)    // j = i+1
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = temp;
            }
        }
    }

    public void TransposeRectangular() {

        int[][] result = new int[Arr[0].length][Arr.length];
        
        System.out.println("The Transpose of rectangualr matrix is : ");

        for (int i = 0; i < Arr.length; i++)
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                result[j][i] = Arr[i][j];
            }
        }

        Arr = result;
    }

    public void ReverseRow()
    {
        int i = 0, j = 0, k =0;
        int temp;

        System.out.println("After Reversing the Row contents : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 , k = Arr[i].length-1 ; j < k ; j++ , k--) 
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[i][k];
                Arr[i][k] = temp;
            }
        }
    }

    public void ReverseCol() 
    {
        int i, j, k, temp = 0;
    
        System.out.println("After Reversing the Col contents : ");
    
        for (j = 0; j < Arr[0].length; j++) 
        {
            for (i = 0, k = Arr.length - 1; i < k; i++, k--)
             {
                temp = Arr[i][j];
                Arr[i][j] = Arr[k][j];
                Arr[k][j] = temp;
            }
        }
    }

    public boolean CheckIdentity()
    {
        if(Arr.length != Arr[0].length)
        {
            return false;
        }

        int i = 0 , j = 0 ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if((i == j) && Arr[i][j] != 1)
                {
                    return false;
                }
                else if((i != j) && Arr[i][j] != 0)
                {
                    return false;
                }
            }
        }
        return true;
    }

    public boolean CheckSparse()
    {
        int i = 0, j = 0;
        int iCnt = 0;
        int TotalCnt = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)  
            {
               if(Arr[i][j] == 0)
               {
                    iCnt ++ ;
               }
               TotalCnt ++;
            }
        }
        if(iCnt >= (TotalCnt/2))
        {
            return true;
        }
        return false;
    }
    

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of Rows : ");
        iRow = sc.nextInt();

        System.out.println("Enter number of Col : ");
        iCol = sc.nextInt();

        Assignment_47 obj = new Assignment_47(iRow, iCol);

        obj.Accept();
        obj.Display();

        /* 
        //Question 1 : 
        if(iRow == iCol)
        {
            obj.TransposeSquare();
            obj.Display();
        }
        else
        {
            obj.TransposeRectangular();
            obj.Display();
        }
        */

        //Question 2 : 
        //obj.ReverseRow();
        //obj.Display();

        //Question 3 :
        //obj.ReverseCol();
        //obj.Display();

        //Question 4 :
        boolean bRet = false;
        if(bRet == true)
        {
            System.out.println("Given matrix is an Identity.");
        }
        else
        {
            System.out.println("Given matrix is not an Identity.");
        }

        //Question 5 :
        boolean bRet1 = false;
        bRet1 = obj.CheckSparse();
        if(bRet1  == true)
        {
            System.out.println("Given matrix is a Sparse.");
        }
        else
        {
            System.out.println("Given matrix is not a Sparse.");
        }

    }
}
