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

void Print(int* a, const int size, int i)
{
    cout << setw(3) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

void Inverse(int* a, const int size, int i)
{
    int tmp = a[i];
    a[i] = a[i + 1];
    a[i + 1] = tmp;

    if (i < size - 1)
        Inverse(a, size, i + 2);
}

int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "n = "; cin >> n;
    const int z = 2 * n;
    int* a = new int[z];

    int Low = -100;
    int High = 100;

    Create(a, z, Low, High, 0);
    cout << "First arr: ";
    Print(a, z, 0);

    Inverse(a, z, 0);
    cout << "New arr:   ";
    Print(a, z, 0);

    return 0;
}
