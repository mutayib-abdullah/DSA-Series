#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h) {
    int i, j, k;
    int temp[100];

    i = l;
    j = mid + 1;
    k = l;

    while (i <= mid && j <= h) {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= h)
        temp[k++] = arr[j++];

    for (i = l; i <= h; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);

        merge(arr, l, mid, h);
    }
}

int main() {
    int arr[100], n;

  cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}