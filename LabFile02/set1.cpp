#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, max;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}