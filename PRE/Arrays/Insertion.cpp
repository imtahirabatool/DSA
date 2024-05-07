#include <iostream>
#include <vector>
using namespace std;

void create(vector<int>& arr) {
    int size;
    cout << "Enter size for Array: ";
    cin >> size;

    arr.resize(size); 

    cout << "Enter " << size << " elements of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elements of array are:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

void insert(vector<int>& arr) {
    int pos, num;
    cout << "Enter the position: ";
    cin >> pos;
    cout << "Enter the number to be inserted: ";
    cin >> num;

    arr.insert(arr.begin() + pos, num);
}

int main() {
    vector<int> arr;
    create(arr);
    insert(arr);

    cout << "Array after insertion:" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << endl;
    }

    return 0;
}
