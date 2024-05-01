#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input dimensions from the user
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum allowed rows is 3. Please enter a valid value." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum allowed columns is 3. Please enter a valid value." << endl;
        return 1;
    }

    // Dynamically allocate memory for the 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        arr[i] = new double[cols];
    }

    // Assign values to each element of the array
   // double value;
   // cout<<"enter value"<<endl;
    //cin>> value;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
           cout<<"enter value. note that this will appear several times n\ corresponding to the number of column and rows you indicated"<<endl;
           cin >> arr[i][j];
        }
    }

    // Output the values of each element
    cout << "Array values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
