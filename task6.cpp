#include <iostream>
using namespace std;

void evenOddTransform(int arr[], int n, int transformations) {
    while (transformations--) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                arr[i] =arr[i] - 2;
            } else {
                arr[i] =arr[i] + 2;
            }
        }
    }
}

int main() {
    int n, transformations;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of transformations: ";
    cin >> transformations;

    evenOddTransform(arr, n, transformations);

    cout << "Transformed array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}