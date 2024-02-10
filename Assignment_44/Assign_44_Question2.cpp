#include<iostream>
using namespace std;

template<class T>
T Max(T num1, T num2, T num3)
{
    T maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    return maxNum;
}

int main()
{
    int iRet = Max(10, 20, 15);
    cout << "Max integer: " << iRet << endl;

    float fRet = Max(10.5f, 20.7f, 15.2f);
    cout << "Max float: " << fRet << endl;

    return 0;
}
