// leetcode 48 Rotate Image
#include <iostream>
#include <vector>
#include <algorithm> // for reverse()
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    // Step 1: Transpose the matrix
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < row; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    cout << "Rotated Matrix (90° Clockwise):" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}