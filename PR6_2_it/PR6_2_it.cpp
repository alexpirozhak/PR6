#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << a[i];
    cout << endl;
}

void Inverse(int* a, const int size)
{
    int tmp;
    for (int i = 0; i < size; i += 2)
    {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
    }
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

    Create(a, z, Low, High);
    cout << "First arr: ";
    Print(a, z);

    Inverse(a, z);
    cout << "New arr:   ";
    Print(a, z);

    return 0;
}
