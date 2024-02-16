// Array to take values of an array and print it later on...
// Traversal Operation
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int size;
	cout << "Enter size for Array: ";
	cin >> size;

	vector<int> arr(size); // Create a vector with the given size

	cout << "Enter " << size << " elements of array:" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}

	cout << "Elements of array are:" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}
