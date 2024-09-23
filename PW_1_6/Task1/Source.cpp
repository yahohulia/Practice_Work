#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Enter number A: ";
    cin >> A;

    int count1 = 0;
    int count0 = 0; 
    int mask = 1; 

    for (int i = 0; i < sizeof(A) * 2; i++) {
        if (A & mask) {
            count1++;
        }
        else {
            count0++;
        }
        mask <<= 1; 
    }

    if (count1 > count0) {
        cout << "There are more units: " << count1 << endl;
    }
    else if (count0 > count1) {
        cout << "There are more zeros: " << count0 << endl;
    }
    else {
        cout << "The number of zeros and ones is the same." << endl;
    }

    return 0;
}
