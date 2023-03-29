#include <iostream>
#include <ctime>
using namespace std;

int LineSearch(int arr[], int key, int size)
{	
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

void main()
{
	int size, key;
	cout << "Enter size: "; cin >> size;
	srand(time(NULL));
	int* arr = new int[size];
	cout << "array: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "element need to be found: "; cin >> key;
	if (LineSearch(arr, key, size) == -1) cout << "\nelement not found";
	else cout << "\nFound! number of element: " << LineSearch(arr, key, size) + 1 << endl;
	delete[] arr;
	return 0;
}
