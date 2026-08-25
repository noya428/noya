#include <iostream>
using namespace std;

void DoubleArray(int numbers[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        numbers[i] *= num;
    }
}

int main()
{
    int numbers[5] = { 10, 20, 30, 40, 50 };

    int num;

    cout << "何倍にしますか：";
    cin >> num;

    DoubleArray(numbers, 5, num);

    cout << "変更後の値" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}