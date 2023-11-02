#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

template <typename T>
void Print(T* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

template <typename T>
void Check(T* a, const int size, bool& result)
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
    cout << "Початоковий масив: ";
    Print(a, n);

    bool result;
    Check(a, n, result);
    if (result)
        cout << "Масив посортований за неспаданням" << endl;
    else
        cout << "Умова не виконана" << endl;

    return 0;
}
