#include <bits/stdc++.h>

using namespace std;

#define ll long long

void printMatrix(vector<vector<int>> &mat) {
    int x, y;
    x = mat.size();
    y = mat[0].size();
    cout << "Size of Matrix is: " << x << " x " << y << "\n";
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j] << setw(5) << "";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void multiplyMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
    cout << "\x1b[1;94m" << "Matrix Multiplication" << "\x1b[0m" << "\n";
    cout << "Mat1 : ";printMatrix(mat1);
    cout << "Mat2 : ";printMatrix(mat2);

    int M, N, A, B;
    M = mat1.size();
    N = mat1[0].size();
    A = mat2.size();
    B = mat2[0].size();

    if (N != A) {
        cout << "Invalid matrix muliplication parameters" << "\n";
        return;
    }

    // Create vector of size M x B
    vector<vector<int>> res(M, vector<int>(B, 0));

    // Algorithm
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < B; j++) {
            for (int k = 0; k < N; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Mat 1 x Mat 2 result is: " << "\n";
    printMatrix(res);
}

void addMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
    cout << "\x1b[1;93m" << "Matrix Addition" << "\x1b[0m" << "\n";
    cout << "Mat1 : ";printMatrix(mat1);
    cout << "Mat2 : ";printMatrix(mat2);

    int M, N, A, B;
    M = mat1.size();
    N = mat1[0].size();
    A = mat2.size();
    B = mat2[0].size();

    if (M != A && N != B) {
        cout << "Invalid matrix addition parameter" << "\n";
        return;
    }

    // Create vector of size M x N or A x B
    vector<vector<int>> res(M, vector<int>(N));

    // Algorithm
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Mat 1 + Mat 2 result is: " << "\n";
    printMatrix(res);
}

void sol1() {
    vector<vector<int>> mat1{
    { 1, 2, 3 },
    { 4, 5, 6 }
    };

    vector<vector<int>> mat2{
        { 7, 8 },
        { 9, 10 },
        { 11, 12 }
    };

    vector<vector<int>> mat3{
        { 1, 0 },
        { -1, 1 }
    };

    vector<vector<int>> mat4{
        { 1, 0, 0 },
        { 0, 1, 0 },
        { 0, 0, 1 }
    };

    vector<vector<int>> M;
    vector<vector<int>> N;


    int mChoice;
    cout << "Select matrix M:\n";
    cout << "1. Matrix mat1 (2x3)\n";
    cout << "2. Matrix mat2 (3x2)\n";
    cout << "3. Matrix mat3 (2x2)\n";
    cout << "4. Matrix mat4 (3x3)\n";

    cout << "Enter choice: ";
    cin >> mChoice;

    switch (mChoice) {
    case 1:
        M = mat1;
        break;
    case 2:
        M = mat2;
        break;
    case 3:
        M = mat3;
        break;
    case 4:
        M = mat4;
        break;
    default:
        cout << "Invalid input" << "\n";
    }




    int nChoice;
    cout << "\nSelect matrix N:\n";
    cout << "1. Matrix A (2x2)\n";
    cout << "2. Matrix B (2x3)\n";
    cout << "3. Matrix C (3x2)\n";
    cout << "4. Matrix D (3x3)\n";

    cout << "Enter choice: ";
    cin >> nChoice;

    switch (nChoice) {
    case 1:
        N = mat1;
        break;
    case 2:
        N = mat2;
        break;
    case 3:
        N = mat3;
        break;
    case 4:
        N = mat4;
        break;
    default:
        cout << "Invalid input" << "\n";
    }

    int operation;
    cout << "\nSelect operation:\n";
    cout << "1. Addition\n";
    cout << "2. Multiplication\n";

    cout << "Enter choice: ";
    cin >> operation;
    cout << "\n";

    switch (operation) {
    case 1:
        addMatrices(M, N);
        break;
    case 2:
        multiplyMatrices(M, N);
        break;
    default:
        cout << "Invalid input" << "\n";
    }
}


int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        sol1();
    }

    cout << endl;
    return 0;
}

// g++ program9_matrix.cpp -o ans && ./ans && rm -rf ./ans 
