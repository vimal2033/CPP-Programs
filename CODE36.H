/*

Title: MATRIX SUM CALCULATOR

Description: This C++ program calculates the sum of two matrices.
It takes user input for matrix dimensions and elements, adds 
corresponding elements, and displays the resulting matrix.
*/


int MatrixSum() {
    // Declare variables for matrix dimensions
    int rows, cols;
    
    // Get matrix dimensions from user
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Declare three 10x10 arrays for two input matrices and result
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    // Input first matrix elements row-wise
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix elements row-wise
    cout << "Enter elements of second matrix:\n";
    for (int k = 0; k < rows; k++) { // Changed 'i' to 'k'
        for (int l = 0; l < cols; l++) { // Changed 'j' to 'l'
            cin >> matrix2[k][l];
        }
    }

    // Calculate sum: add corresponding elements of both matrices
    cout << "\nCalculating sum...\n";
    for (int m = 0; m < rows; m++) {
	for (int n = 0; n < cols; n++) {
	    sum[m][n] = matrix1[m][n] + matrix2[m][n];
        }
    }

    // Display the resulting sum matrix
    cout << "\nSum of the two matrices:\n";
    for (int o = 0; o < rows; o++) {
	for (int p = 0; p < cols; p++) {
	    cout << sum[o][p] << "  ";
        }
        cout << endl;
    }

    cout << "\nProgram executed successfully!" << endl;
    return 0;
}
