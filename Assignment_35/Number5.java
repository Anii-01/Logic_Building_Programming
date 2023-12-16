// Accept n numbers from user, return product of all odd elements

import java.util.*;

class Product
{
    public int Arr[];

    Product(int Arr[])
    { 
        this.Arr = Arr;
    }

    public int CalculateOddProduct()
    {
        int i = 0;
        int OddProduct = 1;
        int OddCount = 0;

        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] % 2) != 0)
            {
                OddProduct = OddProduct * Arr[i];
                OddCount ++; 
            }
        }
        if(OddCount == 0)
        {
            return 0;
        }
        return OddProduct;
    }
}

class Number5
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("How many elements you have to enter : ");
        int n = sc.nextInt();
        
        int Arr[] = new int[n];
        int i = 0;
        for(i = 0; i< Arr.length ; i++)
        {
            System.out.println("Enter "+ i + " number :");
            Arr[i] = sc.nextInt();
        }
        
        Product pobj = new Product(Arr);

        int iRet = 0;

        iRet = pobj.CalculateOddProduct();
        System.out.println("Product is : "+ iRet);

    }
} 