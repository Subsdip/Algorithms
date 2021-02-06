#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp = 0;
    cout << "Enter the size fo the container = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the container = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    cout << "The sorted elements are = ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << ".";
    return 0;
}