#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* s, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        s[i] = Low + rand() % (High - Low + 1);
}

void Print(int* s, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(3) << s[i];
    cout << endl;
}

void ElementsAndSum(const int s[], int size, int& k, int& sum)
{
    k = 0;
    sum = 0;
    for (int i = 0; i < size; i++) {
        if (s[i] % 2 == 0 || i % 3 != 0)
        {
            k++;
            sum += s[i];
        }
    }
}

void Change(int s[], int size)
{
    for (int i = 0; i < size; i++) {
        if (s[i] % 2 == 0 || i % 3 != 0)
        {
            s[i] = 0;
        }
    }
}


int main() {
    srand((unsigned)time(NULL));

    const int size = 23;
    int s[size];
    int Low = 4;
    int High = 16;
    Create(s, size, Low, High);
    cout << "First arr: ";
    Print(s, size);

    int k, sum;
    ElementsAndSum(s, size, k, sum);

    cout << "Number: " << k << endl;
    cout << "Sum: " << sum << endl;

    Change(s, size);
    cout << "New arr:   ";
    Print(s, size);


    return 0;
}
