/*
TITLE: Matrix Row and Column Sum
DESCRIPTION: Reads matrix elements, calculates sum of each row and each column.
Displays original matrix followed by row sums and column sums separately.
*/


void Matrix() {
    clrscr();

    int rows, cols,i,j;
    cout<<"Enter rows and columns: ";
    cin>>rows>>cols;

    int matrix[10][10];

    // Input matrix
    cout<<"Enter matrix elements:\n";
    for(i=0; i<rows; i++) {
	for(j=0; j<cols; j++) {
	    cin>>matrix[i][j];
	}
    }

    // Display matrix
    cout<<"\nMatrix:\n";
    for(i=0; i<rows; i++) {
	for(j=0; j<cols; j++) {
	    cout<<matrix[i][j]<<"\t";
	}
	cout<<endl;
    }

    // Row sums
    cout<<"\nRow Sums:\n";
    for(i=0; i<rows; i++) {
	int sum = 0;
	for(j=0; j<cols; j++) {
	    sum += matrix[i][j];
	}
	cout<<"Row "<<i+1<<": "<<sum<<endl;
    }

    // Column sums
    cout<<"\nColumn Sums:\n";
    for(j=0; j<cols; j++) {
	int sum = 0;
	for(i=0; i<rows; i++) {
	    sum += matrix[i][j];
	}
	cout<<"Col "<<j+1<<": "<<sum<<endl;
    }

    getch();
}
