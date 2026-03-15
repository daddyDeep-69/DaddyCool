#include <iostream>
using namespace std;

void AddMat(int m, int n, int m1[][100], int m2[][100], int m3[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void SubMat(int m, int n, int m1[][100], int m2[][100], int m3[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void MulMat(int m, int n, int m1[][100], int m2[][100], int m3[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            m3[i][j] = 0;
            for (int k = 0; k < n; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void PrintMat(int m, int n, int mat[][100]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int m, n;
    cout << "Enter the size of the matrices (rows cols): ";
    cin >> m >> n;

    int m1[100][100], m2[100][100], result[100][100];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m2[i][j];
        }
    }

    do {
        cout << "\n\tMatrices Menu\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                AddMat(m, n, m1, m2, result);
                cout << "Addition Result:\n";
                PrintMat(m, n, result);
                break;

            case 2:
                SubMat(m, n, m1, m2, result);
                cout << "Subtraction Result:\n";
                PrintMat(m, n, result);
                break;

            case 3:
                MulMat(m, n, m1, m2, result);
                cout << "Multiplication Result:\n";
                PrintMat(m, n, result);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
