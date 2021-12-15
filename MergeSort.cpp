#include <iostream>
using namespace std;


void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid+1, k = l;
    int n=h+1;
    int M[n];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            M[k++] = A[i++];
        }
        else
        {
            M[k++] = A[j++];
        }
    }
    while (i <= mid)
    {
        M[k++] = A[i++];
    }
    while (j <= h)
    {
        M[k++] = A[j++];
    }
    for (int i = l; i <= h; i++)
    {
        A[i] = M[i];
    }
    
}
void MergeSort(int A[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
    }
}
int main(){
    int arr[] = {12,4,6,78,95,98,1,3};
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
    MergeSort(arr,0,8);
    cout<<"hello\n";
     for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
}