#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <limits>  

using namespace std;

int findMinPositive(int A[], int n) {
    int minPositive = numeric_limits<int>::max(); 

    for (int i = 0; i < n; ++i) {
        if (A[i] > 0 && A[i] < minPositive) {
            minPositive = A[i];
        }
    }

    return (minPositive == numeric_limits<int>::max()) ? -1 : minPositive;
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

    int minPositive = findMinPositive(A, n);

    if (minPositive == -1) {
        cout << "Positive elements are not found in the array." << endl;
    }
    else {
        cout << "The smallest value among the positive elements: " << minPositive << endl;
    }

    delete[] A;

    return 0;
}
