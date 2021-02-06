#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key);
int main()
{
    int n;
    cout << "Enter the number of elements = ";
    cin >> n;
    int i;
    int arr[n];
    cout << "*** The elements should be in sorted manner ***\n";
    cout << "Enter the elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key = ";
    cin >> key;
    int a = binarysearch(arr, n, key);
    if (a == 1)
    {
        cout << "Key found...";
    }
    else
    {
        cout << "key not found!!!";
    }
    return 0;
}

int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n, middle, a = 0;
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (key == arr[middle])
        {
            a = a + 1;
            break;
        }
        else if (key < arr[middle])
        {
            end = middle - 1;
        }
        else if (key > arr[middle])
        {
            start = middle + 1;
        }
        else
        {
            a = a + 0;
        }
    }
    return a;
}
