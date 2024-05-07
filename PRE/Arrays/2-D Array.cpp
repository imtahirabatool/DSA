//Two-Dimentional Array
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    int arr[n][m];
    int *p = &arr[0][0]; // Getting the address of the first element of the array

    cout << "Enter elements of Array:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Elements of Array:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << "  "; // No extra newline after each element
        }
        cout << endl; // Add newline after each row
    }

    cout << "Address: " << p << endl; // Print the address of the first element

    return 0; // Return 0 to indicate successful execution
}
