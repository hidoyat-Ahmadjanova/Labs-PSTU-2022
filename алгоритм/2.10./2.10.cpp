
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int range, n, max;
    cout << "Введите длину последовательности:" << endl;
    cin >> range;
    cout << "Введите первое число:" << endl;
    cin >> n;
    max = n;
    for (int i = 2; i <= range; i++)
    {
        cout << "Введите следующее число:" << endl;
        cin >> n;

        if (n > max)
        {
            max = n;
        }
    }
    cout << "Максимальный элемент: " << max << endl;
}

