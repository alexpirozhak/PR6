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
    cout << setw(5) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int SumNegative(int* a, const int size, int i)
{
    if (i < size)
        if (a[i] < 0)
            return a[i] + SumNegative(a, size, i + 1);
        else
            return SumNegative(a, size, i + 1);
    else
        if (a[i] < 0)
            return a[i];
        else
            return 0;

}

int findMinIndex(int* a, const int size, int i, int min)
{
    if (a[i] < a[min])
        min = i;

    if (i < size - 1)
        return findMinIndex(a, size, i + 1, min);
    else
        return min;
}

int findMaxIndex(int* a, const int size, int i, int max)
{
    if (a[i] > a[max])
        max = i;

    if (i < size - 1)
        return findMaxIndex(a, size, i + 1, max);
    else
        return max;
}

int limitProduct(int* a, int index1, int index2)
{
    if (index1 > index2)
        return limitProduct(a, index2, index1);
    if (index2 == index1 + 1)
        return 0;

    if (index1 < index2 - 2)
        return a[index1 + 1] * limitProduct(a, index1 + 1, index2);
    else
        return a[index1 + 1];
}
int Task1_2(int* a, const int size)
{
    int min = findMinIndex(a, size, 0, 0);
    int max = findMaxIndex(a, size, 0, 0);
    return limitProduct(a, min, max);
}

void SortEven(int* a, const int size, int i)
{
    if (a[i] % 2 != 0 && i < size - 2)
    {
        SortEven(a, size, i + 1);
        return;
    }

    int min = a[i];
    int minIndex = i;
    for (int j = i + 1; j < size; j++)
    {
        if (a[j] % 2 != 0)
            continue;

        if (a[j] < a[minIndex])
        {
            min = a[j];
            minIndex = j;
        }
    }
    a[minIndex] = a[i];
    a[i] = min;

    if (i < size - 2)
        SortEven(a, size, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));

    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];

    int Low = -100;
    int High = 100;

    Create(a, n, Low, High, 0);
    cout << "Початоковий масив: ";
    Print(a, n, 0);

    int sum = SumNegative(a, n, 0);
    cout << "Сума відʼємених елементів масиву = " << sum << endl;

    int product = Task1_2(a, n);
    cout << "Добуток елементів масиву між min i max = " << product << endl;

    SortEven(a, n, 0);
    cout << "Сортований масив: ";
    for (int i = 0; i < n; i++)
        cout << setw(5) << a[i];
    cout << endl;

    return 0;
}
