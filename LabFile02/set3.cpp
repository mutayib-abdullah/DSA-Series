#include <iostream>
using namespace std;

int main() {
    int a[50], b[50], merged[100];
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter elements of first array:\n";
    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter elements of second array:\n";
    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    for(int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
    }

    cout << "Merged array:\n";
    for(int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }

    return 0;
}