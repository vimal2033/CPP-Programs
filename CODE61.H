/* 
   BUBBLE SORT - COMPLETE IMPLEMENTATION

   Bubble Sort: Sorts an array in ascending order by repeatedly
   swapping adjacent elements if they are in the wrong order.
*/

// FUNCTION TO PERFORM BUBBLE SORT
void bubble_sort(int arr[], int n) {
    int i, j, temp;

    // Outer loop for number of passes
    for (i = 0; i < n - 1; i++) {
        // Inner loop for pair-wise comparison
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {   // If current > next, swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// FUNCTION TO DISPLAY ARRAY
void bubble_display(int arr[], int n) {
    int i;
    cout << "Array elements: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// MAIN FUNCTION - Reads, sorts, displays
void BUBBLE_SORT_DSA() {
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
    bubble_display(arr, n);

    bubble_sort(arr, n);

    cout << "\nAfter Bubble Sort (ascending):\n";
    bubble_display(arr, n);

    getch();
}
