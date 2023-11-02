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
        cout << setw(5) << a[i];
    cout << endl;
}

int SumNegative(int* a, const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
            sum += a[i];
    }
    return sum;
}

int findMinIndex(int* a, const int size)
{
    int min = 0;
    for (int i = 1; i < size; i++)
        if (a[i] < a[min])
            min = i;
    return min;
}

int findMaxIndex(int* a, const int size)
{
    int max = 0;
    for (int i = 1; i < size; i++)
        if (a[i] > a[max])
            max = i;
    return max;
}

int limitProduct(int* a, int index1, int index2)
{
    if (index1 > index2)
    {
        int temp = index1;
        index1 = index2;
        index2 = temp;
    }
    if (index2 == index1 + 1)
        return 0;

    int product = 1;
    for (int i = index1 + 1; i < index2; i++)
        product *= a[i];

    return product;
}

int Task1_2(int* a, const int size)
{
    int min = findMinIndex(a, size);
    int max = findMaxIndex(a, size);
    return limitProduct(a, min, max);
}

void SortEven(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
            continue;

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
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "n = "; cin >> n;
    int* a = new int[n];

    int Low = -100;
    int High = 100;

    Create(a, n, Low, High);
    cout << "First arr: ";
    Print(a, n);

    int sum = SumNegative(a, n);
    cout << "Sum Negative = " << sum << endl;

    int product = Task1_2(a, n);
    cout << "Product numbers from min till max = " << product << endl;

    SortEven(a, n);
    cout << "Sort arr:  ";
    Print(a, n);
}
