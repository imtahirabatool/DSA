#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(const vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int k, n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter values of array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array before performing binary search
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter k: ";
    cin >> k;

    int res = binarySearch(arr, k);

    if (res != -1)
    {
        cout << k << " found at index " << res << endl;
    }
    else
    {
        cout << k << " does not exist in the given array!" << endl;
    }
    return 0;
}
