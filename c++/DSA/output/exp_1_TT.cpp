#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start = start + 1;
        end = end - 1;
    }
}

int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

void insertElement(int arr[], int size, int position, int value) {
    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size = size - 1;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N = 5;
    int arr[N] = {1, 2, 3, 4, 5};

    reverseArray(arr, 0, N - 1);
    cout << "Reversed Array: ";
    displayArray(arr, N);

    int target = 3;
    int index = searchElement(arr, N, target);
    if (index != -1) {
        cout << "Element " << target << " found at index " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    int newPosition = 2;
    int newValue = 10;
    insertElement(arr, N, newPosition, newValue);
    cout << "Array after insertion: ";
    displayArray(arr, N);

    int deletePosition = 1;
    deleteElement(arr, N, deletePosition);
    cout << "Array after deletion: ";
    displayArray(arr, N);

    return 0;
}