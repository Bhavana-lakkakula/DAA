#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int count = 0;

    int temp[100];

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;

            count = count + (mid - i + 1);
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }

    return count;
}

int mergeSort(int arr[], int low, int high)
{
    int count = 0;

    if (low < high)
    {
        int mid = (low + high) / 2;

        count = count + mergeSort(arr, low, mid);
        count = count + mergeSort(arr, mid + 1, high);
        count = count + merge(arr, low, mid, high);
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = mergeSort(arr, 0, n - 1);

    cout << "Inversion count = " << count;

    return 0;
}
