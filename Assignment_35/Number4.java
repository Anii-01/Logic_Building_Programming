// Accept n numbers from user , accept range and display all elements in range

import java.util.*;

class Display
{
    public int iStart;
    public int iEnd;
    public int Arr[];

    Display(int iStart, int iEnd, int Arr[])
    {
        this.iStart = iStart;
        this.iEnd = iEnd;
        this.Arr = Arr;
    }

    public void DisplayRange()
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] > iStart) && (Arr[i] < iEnd))
            {
                System.out.print(" "+ Arr[i]);
            }
        }
    }
}

class Number4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("How many elements you have to enter : ");
        int n = sc.nextInt();
        System.out.println("Enter Start : ");
        int iStart = sc.nextInt();
        System.out.println("Enter End : ");
        int iEnd = sc.nextInt();
        
        int Arr[] = new int[n];
        int i = 0;
        for(i = 0; i< Arr.length ; i++)
        {
            System.out.println("Enter "+ i + " number :");
            Arr[i] = sc.nextInt();
        }
        
        Display dobj = new Display(iStart,iEnd,Arr);
        dobj.DisplayRange();
    }
} 