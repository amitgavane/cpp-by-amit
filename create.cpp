#include <iostream>
using namespace std;

int main() {
    int i;
    int a[10];

    cout << "Enter array elements: ";
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }

    int target;
    cout << "Enter the target element which you want to search: ";
    cin >> target;

    bool found = false;

    for (i = 0; i < 10; i++) {
        if (a[i] == target) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No Element found" << endl;
    }

    return 0;
}
