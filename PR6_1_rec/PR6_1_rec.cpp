#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* s, const int size, const int Low, const int High, int i)
{
    s[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(s, size, Low, High, i + 1);
}

void Print(int* s, const int size, int i)
{
    cout << setw(3) << s[i];
    if (i < size - 1)
        Print(s, size, i + 1);
    else
        cout << endl;
}

void ElementsAndSum(const int s[], int size, int& k, int& sum, int i)
{
    if (i < size)
    {
        if (s[i] % 2 == 0 || i % 3 != 0)
        {
            k++;
            sum += s[i];
        }
        ElementsAndSum(s, size, k, sum, i + 1);
    }
}

void Change(int s[], int size, int i)
{
    if (i < size)
    {
        if (s[i] % 2 == 0 || i % 3 != 0)
        {
            s[i] = 0;
        }
        Change(s, size, i + 1);
    }
}


int main() {
    srand((unsigned)time(NULL));

    const int size = 23;
    int s[size];
    int Low = 4;
    int High = 16;
    Create(s, size, Low, High, 0);
    cout << "First arr: ";
    Print(s, size, 0);

    int k = 0, sum = 0;
    ElementsAndSum(s, size, k, sum, 0);

    cout << "Number: " << k << endl;
    cout << "Sum: " << sum << endl;

    Change(s, size, 0);
    cout << "New arr:   ";
    Print(s, size, 0);


    return 0;
}
