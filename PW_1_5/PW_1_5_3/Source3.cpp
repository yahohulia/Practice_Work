#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;

void swapMinMax(int A[], int n) {
    if (n == 0) return;

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    if (minIndex != maxIndex) {
        swap(A[minIndex], A[maxIndex]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* A = new int[n];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 151 - 50;
    }

    cout << "Generated array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    swapMinMax(A, n);

    cout << "Array after exchanging the largest and smallest values: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;

    return 0;
}
