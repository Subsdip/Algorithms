
#include<iostream>
using namespace std;

void quick_sort(int arr[], int start, int end);
int partition(int arr[], int start, int end);
void print_array(int arr[], int size);

int main()
{
    int n;
    cout << "Enter the size of the array = ";
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter the elements in the array = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    cout << "The sorted array is = ";
    print_array(arr, n);
    return 0;
}

void quick_sort(int arr[], int start, int end)
{
    int pindex;
    if (start < end)
    {
        pindex = partition(arr, start, end);
        quick_sort(arr, start, pindex - 1);
        quick_sort(arr, pindex + 1, end);
    }
}

int partition(int arr[], int start, int end)
{
    int pindex = start, pivot = end, i = start, temp = 0;
    while (i < end)
    {
        if (arr[i] < arr[pivot])
        {
            temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
            i++;
        }
        else
        {
            i++;
        }
    }
    temp = arr[pivot];
    arr[pivot] = arr[pindex];
    arr[pindex] = temp;
    return pindex;
}

void print_array(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << ".";
}