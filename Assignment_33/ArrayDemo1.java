// Accept n numbers from user and print difference between even ,odd sumation..

import java.util.*;

public class ArrayDemo1
{
    public static int Difference(int Arr[])
    {
        int i = 0;
        int EvenSum = 0;
        int OddSum = 0;

        for(i = 0; i < Arr.length ; i++)
        {
            if((Arr[i] % 2) == 0)
            {
                EvenSum = EvenSum + Arr[i];
            }
            else
            {
                OddSum = OddSum + Arr[i];
            }
        }
        return (EvenSum - OddSum);
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("How many numbers you have to enter : ");
        int no = sc.nextInt();

        int Arr[] = new int[no];
        int i = 0;
        int iRet = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println("Enter " + i +" no : ");
            Arr[i] = sc.nextInt();
        }

        iRet = Difference(Arr);

        System.out.println("The difference is : "+ iRet);
    }
}