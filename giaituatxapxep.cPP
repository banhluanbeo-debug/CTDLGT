#include <iostream>
using namespace std;

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

void inserttionsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int x=a[i];
        int j=i-1;
      while (j>=0 && a[j]>x)
      {
        a[j+1];
        j--;

      }
a[i+1]=x;
    }
}
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);
    
inserttionsort(arr,n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}