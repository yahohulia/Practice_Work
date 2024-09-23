#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>  
using namespace std;

vector<int> xorOperation(const vector<int>& A, const vector<int>& B) {
    int n = A.size();
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        result[i] = A[i] ^ B[i]; 
    }

    return result;
}

vector<int> generateRandomBinarySequence(int n) {
    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        sequence[i] = rand() % 2;
    }
    return sequence;
}

int main() {
    srand(time(0)); 

    int n;
    cout << "Enter the number of elements in the sequence: ";
    cin >> n;

    vector<int> A = generateRandomBinarySequence(n);
    vector<int> B = generateRandomBinarySequence(n);

    cout << "The first sequence: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "The second sequence: ";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    vector<int> result = xorOperation(A, B);

    cout << "The result of the XOR operation: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
