#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key);

int main()
{
    int n, i;
    int arr[n];
    cout << "Enter the limit = ";
    cin >> n;
    cout << "Enter the elements = ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    printf("Enter the key to be check if it exists = ");
    scanf("%d", &key);
    if (linearsearch(arr, n, key) == 1)
    {
        printf("Key found!");
    }
    else
    {
        printf("Key not found!");
    }
    return 0;
}

int linearsearch(int arr[], int n, int key)
{
    int i, a = 0;
    for (i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {
            a = a + 1;
        }
        else
        {
            a = a + 0;
        }
    }
    return a;
}