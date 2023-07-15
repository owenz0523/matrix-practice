#include <iostream>
#include <vector>

using namespace std;

int main() {
  // set initial matrices
  vector<vector<int>> matrix = {{0, 2, 3}, {1, 2, 4}, {3, 4, 5}};
  vector<vector<int>> newMatrix = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

  // output initial matrix
  for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
          cout << matrix[i][j] << " ";
        }
      cout << "" << endl;
      }
  
  // receive input
  string choice;
  cin >> choice;

  // clockwise rotation
  if (choice == "cw") {
      for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
          newMatrix[j][2-i] = matrix[i][j];
        }
      }
    
  // counter-clockwise rotation   
  } else if (choice == "ccw") {
      for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
          newMatrix[2-j][i] = matrix[i][j];
        }
      }
  }

  // output changed matrix
  for (int i=0; i < 3; i++) {
        for (int j=0; j < 3; j++) {
          cout << newMatrix[i][j] << " ";
        }
      cout << "" << endl;
      }

}