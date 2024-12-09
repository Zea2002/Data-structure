#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &size, int capacity, int element, int position) 
{
    if (size >= capacity)
     {
        cout << "Array is full. Cannot insert element.\n";
        return;
    }

    if (position < 0 || position > size) 
    {
        cout << "Invalid position. Valid range: 0 to " << size << ".\n";
        return;
    }

    // Shift elements to the right to make space
    for (int i = size; i > position; --i) 
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
}

void deleteElement(int arr[], int &size, int position) 
{
    if (size <= 0)
     {
        cout << "Array is empty. Cannot delete element.\n";
        return;
    }

    if (position < 0 || position >= size)
     {
        cout << "Invalid position. Valid range: 0 to " << size - 1 << ".\n";
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < size - 1; ++i)
     {
        arr[i] = arr[i + 1];
    }

    size--;
}

void printArray(const int arr[], int size)
 {
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int capacity = 100; 
    int arr[capacity];
    int size;

    // Input initial array
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    if (size > capacity)
     {
        cout << "Size exceeds capacity. Exiting...\n";
        return 1;
    }

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i)
     {
        cin >> arr[i];
    }

    
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (0-based index): ";
    cin >> position;
    insertElement(arr, size, capacity, element, position);

    cout << "Array after insertion: ";
    printArray(arr, size);

    
    cout << "Enter the position to delete (0-based index): ";
    cin >> position;
    deleteElement(arr, size, position);

    cout << "Array after deletion: ";
    printArray(arr, size);

    return 0;
}
