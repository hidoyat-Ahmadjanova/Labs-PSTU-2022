#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;              
    cin >> n;
    if (n < 3)
    {
        cout << "трай эгеин";
    }
    else
    {
         for(int i = 0; i < n; i++)
         {
             for(int a = 0; a < n; a++)
             {
                 if(i == 0 or a == 0 or i == n - 1 or a == n - 1)
                 {
                     cout << '*' << ' ';
                 }
                 else
                 {
                     cout << ' ' << ' ';
                 }
             } cout << endl;
             
         }
    }
    return 0;
}