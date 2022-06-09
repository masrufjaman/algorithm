#include<iostream>
using namespace std;

void insertionSort(int A[], int n)
{
    int key, i;
    for(int j = 1; j < n; j++)
    {
        key = A[j];
        i = j-1;
        while(i > -1 && A[i] > key)
        {
            A[i+1] = A[i];
            i = i-1;
        }
        A[i+1] = key;
    }
}

int main()
{
    int arr[] = {6, 4, 2, 1, 3, 5, 6, 7, 1};
    cout <<"Array before sorting" << endl;
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, n);
    cout <<"Array after sorting" << endl;
    for(int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

}
