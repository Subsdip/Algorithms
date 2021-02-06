#include <iostream>
using namespace std;

void initialize(int arr[], int size);
void push(int arr[], int size, int element);
void pop(int arr[], int size, int element);
void search(int arr[], int size, int element);
void show(int arr[], int size);

int main()
{
    int size;
    cout << "Enter the size of the container = ";
    cin >> size;
    int arr[size];
    initialize(arr, size);
    int i, choice, element;
    do
    {
        cout << "Press (1) for inserting element or (2) to delete element or (3) to search element or (4) to show the elements in the container = ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element to push in the container = ";
            cin >> element;
            push(arr, size, element);
            break;

        case 2:
            cout << "Enter the element to pop = ";
            cin >> element;
            pop(arr, size, element);
            break;

        case 3:
            cout << "Enter the element to search = ";
            cin >> element;
            search(arr, size, element);
            break;

        case 4:
            show(arr, size);
            break;

        default:
            cout << "Wrong choice";
        }
        cout << "Press (1) to continue again or (0) to stop = ";
        cin >> i;
    } while (i == 1);
    return 0;
}

void initialize(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] = -1;
    }
}

void push(int arr[], int size, int element)
{
    int placed = element % size;
    int index = placed;
    while (arr[index] != -1)
    {
        index = (index + 1) % size;
        if (index == placed)
        {
            cout << "Container is full!!!\n";
            return;
        }
    }
    arr[index] = element;
    cout << "Element inserted successfully.\n";
}

void pop(int arr[], int size, int element)
{
    int placed = element % size;
    int index = placed;
    while (arr[index] != element)
    {
        index = (index + 1) % size;
        if (index == placed)
        {
            cout << "Element not found inside the container!\n";
            return;
        }
    }
    arr[index] = -1;
    cout << "Element deleted successfully.\n";
}

void search(int arr[], int size, int element)
{
    int placed = element % size;
    int index = placed;
    while (arr[index] != element)
    {
        index = (index + 1) % size;
        if (index == placed)
        {
            cout << "Element not found inside the container!\n";
            return;
        }
    }
    if (arr[index] == element)
    {
        cout << "Yes, element is present inside the container.\n";
    }
}

void show(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "."
         << "\n";
}
