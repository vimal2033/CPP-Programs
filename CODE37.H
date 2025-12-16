/*
Title: DMA 1D Array (Dynamic Memory Allocation)

Description: This C++ program demonstrates dynamic memory allocation (DMA) for 
a 1-dimensional array. It allocates memory during runtime, takes input to fill 
the array, displays the array elements, and then frees the allocated memory.
*/


void DMA1D() {
    int size;
    clrscr();
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Input elements into the array
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Array elements are: ";
    for (int k = 0; k < size; k++) {
	cout << arr[k] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    cout << "Memory freed successfully." << endl;

    getch();
}
