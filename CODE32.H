/*
 Title: Pyramid Pattern Program 
 Description: Prints full star pyramid of given height
*/


void PyramidPattern() {
    int rows, i, space, stars;
    clrscr();
    cout << "Enter pyramid height: ";
    cin >> rows;
    
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space <= (rows - i); space++)
            cout << " ";
        
        // Print stars (2*i - 1 for pyramid shape)
        for(stars = 1; stars <= (2 * i - 1); stars++)
            cout << "*";
        
        cout << "\n";
    }
    getch();
}
