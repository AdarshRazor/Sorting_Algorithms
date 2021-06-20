#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++) // to reduce no. from behind
    {
        for(j=0; j<n-i-1; j++) // increment the no. from 0 to end
        {
            if(arr[j]>arr[j+1]) // check for bigger no.
            swap(arr[j+1],arr[j]); // swaps
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    cout<<endl;
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
