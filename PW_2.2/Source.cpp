    //Task1
#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> A = {
        {1, 2, 3},    
        {3, 5, 2, 1}, 
        {8, 7, 1}    
    };

    cout << "Starting sequences:\n";
    for (int i = 0; i < A.size(); i++) {
        cout << "Sequence " << i + 1 << ": ";
        for (int j = 0; j < A[i].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < A.size(); i++) {
        int sum = 0;
        for (int j = 0; j < A[i].size(); j++) {
            sum += A[i][j];
        }

        int minValue = A[i][0];
        for (int j = 1; j < A[i].size(); j++) {
            if (A[i][j] < minValue) {
                minValue = A[i][j];
            }
        }

        for (int j = 0; j < A[i].size(); j++) {
            if (A[i][j] == minValue) {
                A[i][j] = sum;
            }
        }
    }

    cout << "\nUpdated sequences:\n";
    for (int i = 0; i < A.size(); i++) {
        cout << "Sequence " << i + 1 << ": ";
        for (int j = 0; j < A[i].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
    // Task 2

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = { 1, 2, 3, 4, 5, 6 }; 
    vector<int> B = { 2, 4 };             
    
    cout << "Initial sequence A: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Initial sequence B: ";
    for (int i = 0; i < B.size(); ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    int productB = 1;
    for (int i = 0; i < B.size(); ++i) {
        productB *= B[i];
    }

    for (int i = 0; i < A.size(); ++i) {
        for (int j = 0; j < B.size(); ++j) {
            if (A[i] == B[j]) {
                A[i] = productB; 
                break;
            }
        }
    }

    cout << "Sequence A has been updated: ";
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

    // Task 3

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m = A.size(); 

    cout << "The initial matrix A:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int j = 0; j < m; ++j) {
        int maxValue = A[0][j];
        int product = 1;  

        for (int i = 0; i < m; ++i) {
            if (A[i][j] > maxValue) {
                maxValue = A[i][j];
            }
            product *= A[i][j];
        }

        for (int i = 0; i < m; ++i) {
            if (A[i][j] == maxValue) {
                A[i][j] = product;
            }
        }
    }

    cout << "\nThe updated matrix A:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
