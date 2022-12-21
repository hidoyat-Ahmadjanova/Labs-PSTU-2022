#include <iostream>

using namespace std;

int main()
{
    int n, num, el;
    cin >> n >> num;
	el = num;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		if (el == 0)
		{
		el = num;
		}
	}
		if (el > 0) 
		{
		cout << "плюс первым";
		}
		else if (el < 0) 
		{
		cout << "минус первым";
		}
		else if (el == 0) 
		{
		cout << "тока нули";
		}

    return 0;
}
