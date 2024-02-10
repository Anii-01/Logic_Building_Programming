#include<iostream>
using namespace std;

template<class T>
T Min(T *arr, int iSize)
{
    T minVal = arr[0];

    for(int i = 1; i < iSize; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iRet = Min(arr, 5);
    cout << "Min integer: " << iRet << endl;

    float fRet = Min(brr, 4);
    cout << "Min float: " << fRet << endl;

    return 0;
}
