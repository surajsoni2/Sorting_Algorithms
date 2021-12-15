#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    while (i < j)
    {
        while (A[i] <= pivot){
            i++;
        }
        while (A[j] > pivot){
            j--;
        }
        if (i < j)
        {
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[l], &A[j]);
    return j;

}

void QuickSort(int A[], int l, int h){
    int pa;
    if (l<h)
    {
        pa=partition(A,l,h);
        QuickSort(A,l,pa-1);
        QuickSort(A,pa+1,h);
    }
    
}

int main()
{
    int arr[] = {9, 5, 77, 6, 2, 4, 3, 8, 1};
    cout<<"arr before sorting"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"arr after sorting"<< endl;
    QuickSort(arr,0,8);
    cout<<"hello world"<< endl;
    for (int i = 0; i < 9; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    
}