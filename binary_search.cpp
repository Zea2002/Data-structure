#include <bits/stdc++.h>
using namespace std;

template <typename T>
int binarySearch(const vector<T>& arr, const T& target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

template <typename T>
void handleInput() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    vector<T> arr(size);
    cout << "Enter the elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "Sorted elements: ";
    for (const T& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    T target;
    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element found at index " << result << ".\n";
    } else {
        cout << "Element not found in the array.\n";
    }
}

int main() {
    int choice;
    cout << "Choose the data type:\n1. Integer\n2. Character\n3. String\n";
    cin >> choice;

    if (choice == 1) 
    {
        handleInput<int>();
    }
     else if (choice == 2) 
     {
        handleInput<char>();
    }
     else if (choice == 3) 
     {
        handleInput<string>();
    } 
    else
     {
        cout << "Invalid choice.\n";
    }

    return 0;
}
