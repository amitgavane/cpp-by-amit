#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int i, k;
    cout << "Enter the index you want to update: ";
    cin >> i;

    cout << "Enter the new value: ";
    cin >> k;

    if (i >= 0 && i < n) {
        a[i] = k;
    } else {
        cout << "Invalid index!" << endl;
        return 1;
    }

    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}

