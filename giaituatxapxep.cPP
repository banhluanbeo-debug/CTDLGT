#include <iostream>
using namespace std;
//// hhhhhh
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)

        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        int j=i-1;
      while (j>=0 && a[j]>x)
      {
        a[j+1]=a[j];
        j--;

      }
a[j+1]=x;
    }
}

void bublesort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
{
    for (int j=i=1;j<n-i-1;j++)
    {
        if(a[j]<a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
}
}
int main()
{
    int arr1[] = {64, 25, 12, 22, 11};
    int arr2[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    // Test Selection Sort
    SelectionSort(arr1, n);
    cout << "SelectionSort result: ";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;

    // Test Insertion Sort
    InsertionSort(arr2, n);
    cout << "InsertionSort result: ";
    for (int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
