#include <iostream>
#include <ctime>

using namespace std;

void* bubbleSort(int* arr, int size)
{
	int tmp;

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	return arr;
}


int interpSearch(int* arr, int key, int size)
{
	int mid = 0;
	int left = 0;
	int right = size;
	bool found = false;

	while ((left <= right) && !found)
	{
		mid = left + ((key - arr[left]) * (right - left)) / (arr[right] - arr[left]);
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			found = true;
		}
	}
	if (arr[left] == key)
	{
		return left;
	}
	else if (arr[right] == key)
	{
		return right;
	}
	else
	{
		return -1;
	}
}


void main()
{
	int key;
	int size;
	cout << "enter the size of array: ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;

	}
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "element to be found ";
	cin >> key;
	cout << "array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	if (interpSearch(arr, key, size) == -1) {
		cout << "\nelement not found";
	}
	else {
		cout << "\nFound! number of element: " << interpSearch(arr, key, size) + 1;
	}
	delete[] arr;
	return 0;
}
