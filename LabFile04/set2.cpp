#include <iostream>
using namespace std;

int main()
{
    int A[100], n, i, j, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(j = 1; j < n; j++)
    {
        key = A[j];
        i = j - 1;

        while(i >= 0 && A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }

        A[i + 1] = key;
    }

    cout << "Sorted Array:\n";
    for(i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}