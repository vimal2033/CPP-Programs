/* 
   QUICK SORT - COMPLETE IMPLEMENTATION

   Quick Sort: Uses divide-and-conquer with a pivot, partitions
   the array, then recursively sorts left and right parts.
*/

// FUNCTION TO SWAP TWO INTEGERS
void quick_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// PARTITION FUNCTION (last element as pivot)
int quick_partition(int arr[], int low, int high) {
    int pivot = arr[high];   // Pivot element
    int i = low - 1;         // Index of smaller element
    int j;

    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {   // If current element <= pivot
            i++;
            quick_swap(&arr[i], &arr[j]);
        }
    }
    quick_swap(&arr[i + 1], &arr[high]);   // Place pivot at correct position
    return (i + 1);
}

// QUICK SORT FUNCTION (recursive)
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = quick_partition(arr, low, high);  // Partition index

        // Recursively sort elements before and after partition
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// DISPLAY FUNCTION
void quick_display(int arr[], int n) {
    int i;
    cout << "Array elements: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// MAIN FUNCTION - Reads, sorts, displays
void QUICK_SORT_DSA() {
    int n, i;
    int arr[20];    // Change size if needed
    clrscr();

    cout << "How many elements (max 20)? ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nBefore sorting:\n";
    quick_display(arr, n);

    quick_sort(arr, 0, n - 1);

    cout << "\nAfter Quick Sort (ascending):\n";
    quick_display(arr, n);

    getch();
}
