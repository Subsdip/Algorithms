#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp = 0, flag = 0;
    cout << "Enter the size fo the container = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the container = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag++;
            }
            else
            {
                continue;
            }
        }
        if (flag == 0)
        {
            cout << "It is sorted only. Noob!\n";
            return 0;
            break;
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