// Accept n numbers from user & return last occurance of that number 

import java.util.*;

class Check
{
    public int iNo;
    public int Arr[];

    Check(int iNo,int Arr[])
    {
        this.iNo = iNo;
        this.Arr = Arr;
    }

    public int CheckNo()
    {
        int i = 0;
        int iPos = -1;

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] == iNo)
            {
                iPos = i;
            }
        }
        return iPos;
    }
}

class Number3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("How many elements you have to enter : ");
        int n = sc.nextInt();
        System.out.println("Which number last occurance you have to find ? :");
        int iNo = sc.nextInt();
        
        int Arr[] = new int[n];
        int i = 0;
        for(i = 0; i< Arr.length ; i++)
        {
            System.out.println("Enter "+ i + " number :");
            Arr[i] = sc.nextInt();
        }
        
        Check cobj = new Check(iNo,Arr);

        int iRet = 0;
        iRet = cobj.CheckNo();

        System.out.println(iNo + " is present at "+ iRet + " index");
    }
} 