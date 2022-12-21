#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    float n1, n2;

 cin >> n1 >> n2;

    if (n2 == 0)
    {
 cout << "На ноль делить нельзя!" << endl;
    }
    else
    {
 cout << n1 / n2 << endl;
    }

}