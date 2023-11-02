#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

template <typename T>
T CreateT(T* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        CreateT(a, size, Low, High, i + 1);

    return 0;
}

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

template <typename T>
T PrintT(T* a, const int size, int i)
{
    cout << setw(5) << a[i];
    if (i < size - 1)
        PrintT(a, size, i + 1);
    else
        cout << endl;

    return 0;
}

void Print(int* a, const int size, int i)
{
    cout << setw(5) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

template <typename T>
T CheckT(T* a, const int size, bool& result, int i)
{
    if (!(a[i] <= a[i + 1]))
    {
        result = 0;
    }

    if (i < size - 2)
        CheckT(a, size, result, i + 1);
    return 0;
}

void Check(int* a, const int size, bool& result, int i)
{
    if (!(a[i] <= a[i + 1]))
    {
        result = 0;
    }

    if (i < size - 2)
        Check(a, size, result, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];

    int z[n] = { 0, 1, 1, 2, 2, 3, 4, 6, 9, 9 };

    int Low = -100;
    int High = 100;

    Create(a, n, Low, High, 0);
    cout << "First arr: ";
    Print(a, n, 0);



    bool result = 1;
    Check(a, n, result, 0);
    if (result)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;


    CreateT(a, n, Low, High, 0);
    cout << "First arr: ";
    PrintT(a, n, 0);

    bool result1 = 1;
    CheckT(a, n, result1, 0);
    if (result1)
        cout << "Sorted" << endl;
    else
        cout << "Not sorted" << endl;


    return 0;
}
