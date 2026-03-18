#include <iostream>
using namespace std;

// Selection Sort
void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

// Insertion Sort
void InsertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

// Bubble Sort
void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

// Quick Sort helpers
int Partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int pi = Partition(a, low, high);
        QuickSort(a, low, pi - 1);
        QuickSort(a, pi + 1, high);
    }
}

// Heap Sort helpers
void Heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest]) largest = left;
    if (right < n && a[right] > a[largest]) largest = right;

    if (largest != i) {
        swap(a[i], a[largest]);
        Heapify(a, n, largest);
    }
}

void HeapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) Heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        Heapify(a, i, 0);
    }
}

int main() {
    int arrOriginal[] = {64, 25, 12, 22, 11};
    int n = sizeof(arrOriginal) / sizeof(arrOriginal[0]);

    int arr1[5], arr2[5], arr3[5], arr4[5], arr5[5];
    for (int i = 0; i < n; i++) {
        arr1[i] = arrOriginal[i];
        arr2[i] = arrOriginal[i];
        arr3[i] = arrOriginal[i];
        arr4[i] = arrOriginal[i];
        arr5[i] = arrOriginal[i];
    }

    SelectionSort(arr1, n);
    cout << "SelectionSort result: ";
    for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    cout << endl;

    InsertionSort(arr2, n);
    cout << "InsertionSort result: ";
    for (int i = 0; i < n; i++) cout << arr2[i] << " ";
    cout << endl;

    BubbleSort(arr3, n);
    cout << "BubbleSort result: ";
    for (int i = 0; i < n; i++) cout << arr3[i] << " ";
    cout << endl;

    QuickSort(arr4, 0, n - 1);
    cout << "QuickSort result: ";
    for (int i = 0; i < n; i++) cout << arr4[i] << " ";
    cout << endl;

    HeapSort(arr5, n);
    cout << "HeapSort result: ";
    for (int i = 0; i < n; i++) cout << arr5[i] << " ";
    cout << endl;

    return 0;
}