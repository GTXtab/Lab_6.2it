#include <iostream>
#include <iomanip>

using namespace std;


void genArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
}

int avgSum(const int arr[], const int n) // ітераційний спосіб
{
	int s = 0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
		 s += i;
		 count++;
		}
	}

	return s / count;
}

void Print(const int arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

int main() 
{
	int size;

	cout << "Enter size - "; cin >> size;
	int* arr = new int[size];
	genArray(arr, size);

	cout << "Array: ";
	Print(arr, size);

	int sum = avgSum(arr, size);
	cout << "avgSum: " << sum << endl;

	delete[] arr;
	return 0;
}
