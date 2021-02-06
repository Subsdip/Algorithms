#include <iostream>
using namespace std;
void merge_sort(int arr[], int start, int end);
void mergeit(int arr[], int start, int middle, int end);
void show(int arr[], int size);
int main()
{
    int n;
    cout << "Enter the size of the container = ";
    cin >> n;
    int i, arr[n];
    cout << "Enter the elements to sort = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n - 1);
    show(arr,n);
    return 0;
}

void merge_sort(int arr[], int start, int end)
{
    int middle;
    if (start < end)
    {
        middle = (start + end) / 2;
        merge_sort(arr, start, middle);
        merge_sort(arr, middle + 1, end);
        mergeit(arr, start, middle, end);
    }
}

void mergeit(int arr[], int start, int middle, int end)
{
    int n1 = middle - start + 1;
    int n2 = end - middle;

    int temp_arr_1[n1], temp_arr_2[n2];

    for (int i = 0; i < n1; i++)
    {
        temp_arr_1[i] = arr[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        temp_arr_2[j] = arr[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 && j < n2)
    {
        if (temp_arr_1[i] <= temp_arr_2[j])
        {
            arr[k] = temp_arr_1[i];
            i++;
        }
        else
        {
            arr[k] = temp_arr_2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = temp_arr_1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = temp_arr_2[j];
        j++;
        k++;
    }
}

void show(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << ".";
}