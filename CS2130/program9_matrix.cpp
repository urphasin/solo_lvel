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
    cout << "Mat1 : ";printMatrix(mat1);
    cout << "Mat2 : ";printMatrix(mat2);

    int M, N, A, B;
    M = mat1.size();
    N = mat1[0].size();
    A = mat2.size();
    B = mat2[0].size();

    if(N != A) {
        cout << "Invalid matrix muliplication parameters" << "\n";
        return;
    }

    // Create vector of size M x B
    vector<vector<int>> res(M, vector<int>(B, 0));
    cout << "Initial res: " << "\n";
    printMatrix(res);

    // Algorithm
    for(int i = 0; i < M; i++) {
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
    cout << "Mat1 : ";printMatrix(mat1);
    cout << "Mat2 : ";printMatrix(mat2);
    
    int M, N, A, B;
    M = mat1.size();
    N = mat1[0].size();
    A = mat2.size();
    B = mat2[0].size();

    if(M != A && N != B) {
        cout << "Invalid matrix addition parameter" << "\n";
        return;
    }

    // Create vector of size M x N or A x B
    vector<vector<int>> res(M, vector<int>(N));

    // Algorithm
    for(int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Mat 1 x Mat 2 result is: " << "\n";
    printMatrix(res);
}

void sol1() {
    int M, N;
    int A, B;
    cout << "Create 2 matrices: " << "\n";

    // Create matrix M x N
    cout << "Enter M and N spearated by space: ";
    cin >> M >> N;
    cout << endl;

    while (!(2 <= M && M <= 3) || !(2 <= N && N <= 3)) {
        cout << "M and N need to be between 2 and 3: ";
        cin >> M >> N;
        cout << endl;
    }

    // create the vector for mat1
    vector<vector<int>> mat1(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            mat1[i][j] = 2 * (i + j) + (j * (i + 3));
        }
    }

    // Create matrix A x B 
    cout << "Enter A and B spearated by space: ";
    cin >> A >> B;
    cout << endl;

    while (!(2 <= A && A <= 3) || !(2 <= B && B <= 3)) {
        cout << "A and B need to be between 2 and 3: ";
        cin >> A >> B;
        cout << endl;
    }

    // Create the vector for mat2
    vector<vector<int>> mat2(A, vector<int>(B));

    for (int i = 0; i < A; i++) {
        for (int j = 0; j < B; j++) {
            mat2[i][j] = 3 * (i + j) + (j * (i - 2));
        }
    }

    // Print matrix
    printMatrix(mat1);
    printMatrix(mat2);
    
    // Run algorithm
}


int main() {
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        vector<vector<int>> mat1 {
            {1, 2, 3},
            {4, 5, 6}
        };

        vector<vector<int>> mat2 {
            {7, 8},
            {9, 10},
            {11, 12}
        };

        multiplyMatrices(mat1, mat2);
    }

    cout << endl;
    return 0;
}

// g++ program9_matrix.cpp -o ans && ./ans && rm -rf ./ans 
