#include <iostream>
#include <vector>

using namespace std;

// normalizing function
vector<vector<float>> normalizeMatrix(vector<vector<float>> matrix, int max, int min) {
  for (int i=0; i < matrix.size(); i++) {
    for (int j=0; j< matrix[i].size(); j++) {
       matrix[i][j] = (matrix[i][j] - min*1.0) / (max*1.0 - min*1.0);
    }
  }
  return matrix;
}

// multiplying function
vector<vector<int>> multiplyMatrix2x2(vector<vector<float>> matrix, vector<vector<float>> matrix2) {
  vector<vector<int>> multipliedMatrix = {{0, 0}, {0, 0}};
  multipliedMatrix[0][0] = matrix[0][0] * matrix2[0][0] + matrix[0][1] * matrix2[1][0];
  multipliedMatrix[0][1] = matrix[0][0] * matrix2[0][1] + matrix[0][1] * matrix2[1][1];
  multipliedMatrix[1][0] = matrix[0][1] * matrix2[0][0] + matrix[1][1] * matrix2[1][0];
  multipliedMatrix[1][1] = matrix[0][1] * matrix2[0][1] + matrix[1][1] * matrix2[1][1];
  return multipliedMatrix;
}

int main() {
  // set initial variables
  vector<vector<float>> matrix = {{2.0, 3.0}, {4.0, 5.0}};
  vector<vector<float>> matrix2 = {{2.0, 3.0}, {4.0, 5.0}};

  // receive input for max/min
  int max, min;
  cout << "Max: ";
  cin >> max;
  cout << "Min: ";
  cin >> min;
  
  // run + output normalized matrix
  vector<vector<float>> normalizedMatrix = normalizeMatrix(matrix, max, min);
  for (int i=0; i < matrix.size(); i++) {
    for (int j=0; j< matrix[i].size(); j++) {
      cout << normalizedMatrix[i][j] << " ";
    }
    cout << "\n";
  }

  // run + output multiplied matrix
  vector<vector<int>> multipliedMatrix = multiplyMatrix2x2(matrix, matrix2);
  for (int i=0; i < matrix.size(); i++) {
    for (int j=0; j< matrix[i].size(); j++) {
      cout << multipliedMatrix[i][j] << " ";
    }
    cout << "\n";
  }
  
}