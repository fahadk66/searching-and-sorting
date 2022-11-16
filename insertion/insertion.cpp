#include<iostream>
using namespace std;
#define n  4
 

void insertionSort(int arr[])
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
      
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 

void printArray(int arr[])
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
   
 
    insertionSort(arr);
    printArray(arr);
 
    return 0;
}
