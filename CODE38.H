/*
Title: DMA 2D Array (Dynamic Memory Allocation)

Description: This C++ program demonstrates dynamic memory allocation (DMA) for 
a 2-dimensional array. It allocates memory during runtime for rows and columns, 
takes input to fill the matrix, displays the matrix elements, and then frees 
the allocated memory.
*/


int DMA2D() {
    int rows, cols;

    // Input the dimensions of the 2D array
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for 2D array (array of pointers)
    int** matrix = new int*[rows];
    int i; // Declare i once for all loops
    for (i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    // Input elements into the 2D array
    cout << "Enter " << rows << "x" << cols << " matrix elements:\n";
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the 2D array elements
    cout << "\n2D Array elements:\n";
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }

    // Free the dynamically allocated memory (column-wise first, then row pointers)
    for (i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    cout << "\nMemory freed successfully." << endl;

    return 0;
}
