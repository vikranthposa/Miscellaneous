#include <iostream>
using namespace std;

int main()
{
  int row, col;
  cout << "Enter the row and col values" << endl;
  cin >> row >> col;
  int **arr;
  arr = new int*[row];
  for(int i=0; i<row ; i++) {
    arr[i] = new int[col];
  }

  int val = 1;
  for(int i=0; i<row ; i++) {
    for(int j=0; j<col ; j++) {
      arr[i][j] = val++;
    }
  }

  cout << "2D Array is " << endl;
  for(int i=0 ; i<row ; i++) {
    for(int j=0 ; j<col ; j++) {
      cout << arr[i][j] << ' ' ;
    }
    cout << endl;
  }

  return 0;
}
