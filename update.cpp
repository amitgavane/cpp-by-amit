#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index, value;
    cout << "Enter the index and the value to update: ";
    cin >> index >> value;

    if (index >= 0 && index < n) {
        arr[index] = value;
    } else {
        cout << "Index out of range" << endl;
        return 1;
    }

    cout << "Updated array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
