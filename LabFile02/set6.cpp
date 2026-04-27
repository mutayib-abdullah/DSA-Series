#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 7, 10, 14, 18, 21};
    int n = 7;
    int key = 10;

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid;
            return 0;
        }
        else if (arr[mid] < key) {
            left = mid + 1;   // search right side
        }
        else {
            right = mid - 1;  // search left side
        }
    }

    cout << "Element not found";
    return 0;
}