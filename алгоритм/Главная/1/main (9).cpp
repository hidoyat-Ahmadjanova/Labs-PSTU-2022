#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n; 
 cin >> n;
    if (n < 2)
    {
 cout << "трай эгеин";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int a = 0; a < n; a++)
            {
 cout << '*' << ' '; 
            }
            cout << endl;
         }
    }
    return 0;
}