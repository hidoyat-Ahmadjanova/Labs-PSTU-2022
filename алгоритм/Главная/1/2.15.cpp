#include <iostream>

using namespace std;

int main()
{
    int n, s, a;
    cin >> n >> s;
    if ( n < 0)
    {
        cout << "н больше 0 над";
    }
    else
    {
        while(n)
        {
            a = n % 10;
         if ( s == a)
            {
                cout << "дя"; break;
            }
        else
        {
            n = n / 10;
        }
        }
        if (s =! n)
        {
            cout << "ноу";
        }
        }
      
 

    return 0;
}