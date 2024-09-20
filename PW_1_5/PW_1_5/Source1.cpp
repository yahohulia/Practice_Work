#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int findFirstOccurrence(int A[], int n, int P) {
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (A[i] == P) {
            index = i;
            break;
        }
    }
    return index;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* A = new int[n];

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 101;
    }

    cout << "Generated array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    int P;
    cout << "Enter a number to search for: ";
    cin >> P;

    int result = findFirstOccurrence(A, n, P);

    if (result == -1) {
        cout << "Number " << P << " Not found of the array" << endl;
    }
    else {
        cout << "The first occurrence of a number " << P << " found by index " << result << endl;
    }

    delete[] A;

    return 0;
}
