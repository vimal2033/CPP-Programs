/* 
   SELECTION SORT - COMPLETE IMPLEMENTATION

   Selection Sort: Finds the minimum element in the unsorted part
   and places it at the beginning, sorting the array in ascending order.
*/


// FUNCTION TO PERFORM SELECTION SORT
void selection_sort(int arr[], int n) {
    int i, j, minIndex, temp;

    // Move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        minIndex = i;                  // Assume current index is minimum

        // Find index of minimum element in remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap current element with minimum element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// FUNCTION TO DISPLAY ARRAY
void selection_display(int arr[], int n) {
    int i;
    cout << "Array elements: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// MAIN FUNCTION - Reads, sorts, displays
void SELECTION_SORT_DSA() {
    int n, i;
    int arr[20];     // Change size if needed
    clrscr();

    cout << "How many elements (max 20)? ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nBefore sorting:\n";
    selection_display(arr, n);

    selection_sort(arr, n);

    cout << "\nAfter Selection Sort (ascending):\n";
    selection_display(arr, n);

    getch();
}
