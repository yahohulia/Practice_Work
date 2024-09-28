        // Task 1(2)

#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <iomanip> 

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    const int m = 10; 
    const int n = 10; 

    int** A = new int* [m];
    for (int i = 0; i < m; ++i) {
        A[i] = new int[n];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = std::rand() % 201 - 100;
        }
    }

    int min_value = A[0][0];
    int min_row = 0, min_col = 0; 

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] < min_value) {
                min_value = A[i][j];
                min_row = i;
                min_col = j;
            }
        }
    }

    std::cout << "Generated sequences:\n";
    for (int i = 0; i < m; ++i) {
        std::cout << "String " << std::setw(2) << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << A[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << "\nMinimum value: " << min_value << '\n';
    std::cout << "Minimum value indices: string " << min_row + 1 << ", column " << min_col + 1 << '\n';

    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

        // Task 2(3)

#include <iostream>
#include <cstdlib>
#include <ctime>   
#include <iomanip> 

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    const int m = 10;
    const int n = 10;

    int** A = new int* [m];
    for (int i = 0; i < m; ++i) {
        A[i] = new int[n];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = std::rand() % 199 - 99;
        }
    }

    int max_negative = -100;
    bool found_negative = false;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] < 0 && A[i][j] > max_negative) {
                max_negative = A[i][j];
                found_negative = true;
            }
        }
    }

    std::cout << "Generated sequences:\n";
    for (int i = 0; i < m; ++i) {
        std::cout << "String " << std::setw(2) << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << A[i][j] << " ";
        }
        std::cout << '\n';
    }

    if (found_negative) {
        std::cout << "\nThe maximum negative value of all sequences: " << max_negative << '\n';
    }
    else {
        std::cout << "\nNo negative values were found.\n";
    }

    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

        // Task 3(4)

#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <iomanip>  

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));  

    const int m = 10; 
    const int n = 10;

    int** A = new int* [m];
    for (int i = 0; i < m; ++i) {
        A[i] = new int[n];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = std::rand() % 199 - 99;
        }
    }

    int min_positive = 100;
    bool found_positive = false;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] > 0 && A[i][j] < min_positive) {
                min_positive = A[i][j];
                found_positive = true;
            }
        }
    }

    std::cout << "Generated sequences:\n";
    for (int i = 0; i < m; ++i) {
        std::cout << "String " << std::setw(2) << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << A[i][j] << " ";
        }
        std::cout << '\n';
    }

    if (found_positive) {
        std::cout << "\nThe minimum positive value from all sequences: " << min_positive << '\n';
    }
    else {
        std::cout << "\nNo positive values were found.\n";
    }

    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
