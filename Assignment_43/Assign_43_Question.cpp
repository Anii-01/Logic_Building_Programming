#include<iostream>
using namespace std;

class Array
{
protected:
    int *Arr;
    int size;

public:
    Array(int value = 10)
    {
        cout << "Inside Constructor\n";
        this->size = value;
        this->Arr = new int[size];
    }

    Array(Array &ref)
    {
        cout << "Inside copy constructor\n";
        this->size = ref.size;
        this->Arr = new int[this->size];

        for (int i = 0; i < size; i++)
        {
            this->Arr[i] = ref.Arr[i];
        }
    }

    ~Array()
    {
        cout << "Inside Destructor\n";
        delete[] Arr;
    }

    inline void Accept();
    inline void Display();
};

void Array::Accept()
{
    cout << "Please enter the values\n";
    for (int i = 0; i < this->size; i++)
    {
        cin >> Arr[i];
    }
}

void Array::Display()
{
    cout << "Elements are\n";
    for (int i = 0; i < this->size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

class ArrSearch : public Array
{
public:
    ArrSearch(int no = 10) : Array(no) {}

    int Frequency(int);
    int SearchFirst(int);
    int SearchLast(int);
    int EvenCount();
    int OddCount();
    int SumAll();
};

int ArrSearch::SearchFirst(int value)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            break;
        }
    }
    if (i == size)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

int ArrSearch::Frequency(int value)
{
    int icnt = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == value)
        {
            icnt++;
        }
    }
    return icnt;
}

// ----Q.1
int ArrSearch::SearchLast(int value)
{
    int i = size - 1;
    while (i >= 0)
    {
        if (Arr[i] == value)
        {
            return i + 1;
        }
        i--;
    }
    return -1;
}

//-----Q.2
int ArrSearch::EvenCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

//-----Q.3
int ArrSearch::OddCount()
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

//-----Q.4
int ArrSearch::SumAll()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += Arr[i];
    }
    return sum;
}

int main()
{
    cout << "Inside main\n";
    ArrSearch sobj1(5);
    sobj1.Accept();
    sobj1.Display();

    int iret = sobj1.Frequency(11);
    cout << "Frequency is " << iret << "\n";

    iret = sobj1.SearchFirst(11);
    cout << "First occurrence is " << iret << "\n";

    int lastOccurrence = sobj1.SearchLast(11);
    cout << "Last occurrence is " << lastOccurrence << "\n";

    int evenCount = sobj1.EvenCount();
    cout << "Number of even elements: " << evenCount << "\n";

    int oddCount = sobj1.OddCount();
    cout << "Number of odd elements: " << oddCount << "\n";

    int sum = sobj1.SumAll();
    cout << "Sum of all elements: " << sum << "\n";

    return 0;
}
