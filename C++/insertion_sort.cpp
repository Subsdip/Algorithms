#include <iostream>
using namespace std;

int main()
{
    int n, i, temp = 0, z = 0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        for (z = i + 1; z != 0; z--)
        {
            if (arr[z] < arr[z - 1])
            {
                temp = arr[z];
                arr[z] = arr[z - 1];
                arr[z - 1] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << ".";
    return 0;
}

