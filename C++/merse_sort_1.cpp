#include <iostream>
using namespace std;

int main()
{
    cout << "The elements inserted should be sorted!!!\n";

    int n1;
    cout << "Enter the size of the array = ";
    cin >> n1;

    int i = 0, j = 0, k = 0, l;

    int sub_arr1[n1];
    cout << "Enter the elements in the array = ";
    for (l = 0; l < n1; l++)
    {
        cin >> sub_arr1[l];
    }

    int n2;
    cout << "Enter the size of the array = ";
    cin >> n2;

    int sub_arr2[n2];
    cout << "Enter the elements in the array = ";
    for (l = 0; l < n2; l++)
    {
        cin >> sub_arr2[l];
    }

    int main_arr3[n1 + n2];

    while (j < n1 && k < n2)
    {
        if (sub_arr1[j] > sub_arr2[k])
        {
            main_arr3[i] = sub_arr2[k];
            k++;
            i++;
        }
        else if (sub_arr1[j] < sub_arr2[k])
        {
            main_arr3[i] = sub_arr1[j];
            j++;
            i++;
        }
        else
        {
            main_arr3[i] = sub_arr1[j];
            j++;
            i++;
        }
    }
    while (j < n1)
    {
        main_arr3[i] = sub_arr1[j];
        j++;
        i++;
    }
    while (k < n2)
    {
        main_arr3[i] = sub_arr2[k];
        k++;
        i++;
    }

    cout << "The merged sorted elements are = ";
    for (l = 0; l < n1 + n2; l++)
    {
        cout << main_arr3[l] << " ";
    }

    cout << ".";

    return 0;
}