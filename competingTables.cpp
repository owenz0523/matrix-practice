#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  while (true) {
    // receive input to create matrices
    int x;
    cin >> x;
  
    // create matrices with random numbers
    vector<vector<int>> matrix1 = {};
    vector<vector<int>> matrix2 = {};
    for (int i=0; i < x; i++) {
      vector<int> vector1 = {};
      vector<int> vector2 = {};
      for (int j=0; j < x; j++) {
        vector1.push_back(rand() % 100);
        vector2.push_back(rand() % 100);
      }
      matrix1.push_back(vector1);
      matrix2.push_back(vector2);
    }
  
    // output initial matrices
    cout << "matrix 1" << endl;
    for (int i=0; i < x; i++) {
          for (int j=0; j < x; j++) {
            cout << matrix1[i][j] << " ";
          }
        cout << "" << endl;
        }
    cout << "matrix 2" << endl;
    for (int i=0; i < x; i++) {
          for (int j=0; j < x; j++) {
            cout << matrix2[i][j] << " ";
          }
        cout << "" << endl;
        }
  
    // compete function
    string y;
    cin >> y;
    if (y == "compete") {
      for (int i=0; i < x; i++) {
        for (int j=0; j < x; j++) {
          if (matrix1[i][j] > matrix2[i][j]) {
            matrix2[i][j] = 0;
          } else if (matrix1[i][j] < matrix2[i][j]) {
            matrix1[i][j] = 0;
          } else {
            matrix1[i][j] = 0;
            matrix2[i][j] = 0;
          }
        }
      }
    }
  
    // output changed matrices
    cout << "new matrix 1" << endl;
    for (int i=0; i < x; i++) {
          for (int j=0; j < x; j++) {
            cout << matrix1[i][j] << " ";
          }
        cout << "" << endl;
        }
    cout << "new matrix 2" << endl;
    for (int i=0; i < x; i++) {
          for (int j=0; j < x; j++) {
            cout << matrix2[i][j] << " ";
          }
        cout << "" << endl;
        }
  
    // determine winner
    int n1, n2;
    n1 = 0;
    n2 = 0;
    for (int i=0; i < x; i++) {
          for (int j=0; j < x; j++) {
            if (matrix1[i][j] == 0) {
              n1++;
            }
            if (matrix2[i][j] == 0) {
              n2++;
            }
          }
  
      }

    // output winner
    if (n1 > n2) {
      cout << "matrix 2 wins" << endl;
    } else if (n2 > n1) {
      cout << "matrix 1 wins" << endl;
    } else {
      cout << "tie" << endl;
    }
  
    // determine if game continues
    string continuation;
    cin >> continuation;
    if (continuation == "exit") {
      break;
    } else if (continuation == "restart") {
      continue;
    }
  }

}