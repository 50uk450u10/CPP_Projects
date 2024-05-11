/*
Sean Zamora
ITSE-2331
4/2/24
Write a function that accepts an int array and the array’s size as arguments.
The function should create a new array that is twice the size of the argument array.
The function should copy the contents of the argument array to the new array and initialize the unused elements of the second array with 0.
The function should return a pointer to the new array.
*/

#include <iostream>

using namespace std;

int* ExpandArray(int s, int a[]) {
	int ns = s * 2;//double array size
	int* arr = new int[ns];//declare new array

	for (int i = 0; i < ns; ++i) {//copy contents of argument array to new array
		arr[i] = a[i];
	}

	for (int i = s; i < ns; ++i) {//initialize remaining elements to 0
		arr[i] = 0;
	}

	return arr;
}

int main()
{
	int size;
	cout << "Enter array size: " << endl;
	cin >> size;//take in original size
	int* myArray = new int[size];//declare original array
	for (int i = 0; i < size; ++i) {//take original array elements
		cout << "Enter element: " << endl;
		cin >> myArray[i];
	}
	cout << endl;
	int* newArray = ExpandArray(size, myArray);//function call, returned array assigned
	cout << "Array elements: " << endl;
	for (int i = 0; i < size * 2; ++i) {//print out new array
		cout << newArray[i] << " ";
	}
	cout << endl;
	delete[] newArray, myArray;//freeing allocated memory

	return 0;
}
