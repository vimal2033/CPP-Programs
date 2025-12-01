/*
 Title: 2D Matrix Program
 Description: Matrix input, display and sum calculation
*/

void Matrix2D() {
    int matrix[3][3], i, j, sum = 0;
    clrscr();

    cout << "Enter 3x3 matrix elements:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    // Calculate sum
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            sum += matrix[i][j];

    cout << "\nSum of all elements: " << sum << endl;
    getch();
}
