// Array to take values of an array and print it later on...
// Traversal Operation
#include <iostream>
using namespace std;

int main()
{
    int size;
    int arr[size];
    cout << "Enter size for Array:";
    cin >> size;
    // taking input from user;
    cout << "Enter " << size << " elements of array:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> arr[i];
    }
    // print output on screen;
    cout << "Elements of array are:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << "" << endl;
    }
    //		cout<<endl;
    return 0;
}
