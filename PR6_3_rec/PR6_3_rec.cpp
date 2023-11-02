#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

template <typename T>
void Print(T* a, const int size, int i)
{
    cout << a[i] << " ";
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

template <typename T>
void Check(T* a, const int size, bool& result, int i)
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

    int Low = -100;
    int High = 100;

    Create(a, n, Low, High, 0);
    cout << "Початоковий масив: ";
    Print(a, n, 0);



    bool result = 1;
    Check(a, n, result, 0);
    if (result)
        cout << "Масив посортований за неспаданням" << endl;
    else
        cout << "Умова не виконана" << endl;

    return 0;
}
