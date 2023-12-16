// Accept n numbers from user check wheather NO is present or not 

import java.util.*;

class Check
{
    public int iNo;
    public int Arr[];

    Check(int iNo , int Arr[])
    {
        this.iNo = iNo;
        this.Arr = Arr;
    }

    public boolean CheckNo()
    {
        int i = 0;
        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] == iNo)
            {
                return true;
            }
        }
        return false;
    }
}

class Number1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("How many elements you have to enter : ");
        int n = sc.nextInt();
        System.out.println("Which number you hve to find ? :");
        int iNo = sc.nextInt();
        
        int Arr[] = new int[n];
        int i = 0;
        for(i = 0; i< Arr.length ; i++)
        {
            System.out.println("Enter "+ i + " number :");
            Arr[i] = sc.nextInt();
        }

        Check cobj = new Check(iNo,Arr);

        boolean iRet = false;
        iRet = cobj.CheckNo();

        if(iRet == true)
        {
            System.out.println(iNo + " is present in given numbers!");
        }
        else
        {
            System.out.println(iNo + " is not present in given numbers!");
        }
    }
} 