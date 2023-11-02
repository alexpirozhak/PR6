#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

template <typename T>
T CreateT(T* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);

    return 0;
}

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

template <typename T>
T PrintT(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << a[i];
    cout << endl;

    return 0;
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << a[i];
    cout << endl;
}

template <typename T>
T CheckT(T* a, const int size, bool& result)
{
    result = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (!(a[i] <= a[i + 1]))
        {
            result = 0;
        }
    }
    return 0;
}

void Check(int* a, const int size, bool& result)
{
    result = 1;
    for (int i = 0; i < size - 1; i++)
    {
        if (!(a[i] <= a[i + 1]))
        {
            result = 0;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];

    int Low = -100;
    int High = 100;

    Create(a, n, Low, High);
    cout << "First arr: ";
    Print(a, n);

    bool result;
    Check(a, n, result);
    if (result)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;

    CreateT(a, n, Low, High);
    cout << "First arr: ";
    PrintT(a, n);

    bool result1;
    CheckT(a, n, result1);
    if (result1)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;

    return 0;
}