#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, num;
    bool plusFirst = false; // flag
    bool minusFirst = false; // flag
    cout << "Введите длину последовательности:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (!plusFirst && !minusFirst)
        {
            if (num > 0) { plusFirst = true; }
            else if (num < 0) { minusFirst = true; }
        }
    }
    if (plusFirst)
    {
        cout << "Сначала ввели положительное число";
    }
    else if (minusFirst)
    {
        cout << "Сначала ввели отрицательное число";
    }
    else
    {
        cout << "Все были нулевыми";
    }
    cout << endl;
}
