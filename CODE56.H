/* 
   1D ARRAY OPERATIONS 
   
   1D Array Operations: Complete implementation with insertion (end/position), 
   deletion (end/position), search, and display using unique array1d_ prefixed functions.
*/


// GLOBAL VARIABLES FOR 1D ARRAY (SPECIFIC NAMES)
int array1d_capacity = 6;      // Maximum array size
int array1d_arr[6];            // Array to store elements
int array1d_size = 0;          // Current number of elements

// DISPLAY FUNCTION - Shows all array elements
void array1d_display() {
    if (array1d_size == 0) {   // Check if array is empty
        cout << "Array is empty" << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < array1d_size; i++) {  // Loop through valid elements
        cout << array1d_arr[i];
        if (i < array1d_size - 1) cout << " ";  // Space between elements
    }
    cout << endl;
}

// INSERT AT END - Adds element at last position (O(1))
void array1d_insertEnd(int data) {
    if (array1d_size == array1d_capacity) {  // Check for overflow
        cout << "Array Overflow! Cannot insert " << data << endl;
        return;
    }
    array1d_arr[array1d_size++] = data;  // Add at end and increment size
    cout << data << " inserted at end successfully" << endl;
}

// INSERT AT POSITION - Shifts elements right (O(n))
void array1d_insertPos(int pos, int data) {
    if (array1d_size == array1d_capacity) {  // Overflow check
        cout << "Array Overflow!" << endl;
        return;
    }
    if (pos < 0 || pos > array1d_size) {     // Position validation
        cout << "Invalid position!" << endl;
        return;
    }
    
    // SHIFT ELEMENTS RIGHT to create space
    for (int i = array1d_size - 1; i >= pos; i--) {
        array1d_arr[i + 1] = array1d_arr[i];
    }
    array1d_arr[pos] = data;     // Insert new element
    array1d_size++;              // Increment size
    cout << data << " inserted at position " << pos << endl;
}

// DELETE FROM END - Removes last element (O(1))
void array1d_deleteEnd() {
    if (array1d_size == 0) {     // Underflow check
        cout << "Array Underflow!" << endl;
        return;
    }
    cout << array1d_arr[array1d_size - 1] << " deleted from end" << endl;
    array1d_size--;              // Just reduce size
}

// DELETE FROM POSITION - Shifts elements left (O(n))
void array1d_deletePos(int pos) {
    if (array1d_size == 0) {     // Empty array check
        cout << "Array is empty!" << endl;
        return;
    }
    if (pos < 0 || pos >= array1d_size) {  // Position validation
        cout << "Invalid position!" << endl;
        return;
    }
    cout << array1d_arr[pos] << " deleted from position " << pos << endl;
    
    // SHIFT ELEMENTS LEFT to fill gap
    for (int i = pos; i < array1d_size - 1; i++) {
        array1d_arr[i] = array1d_arr[i + 1];
    }
    array1d_size--;              // Reduce size
}

// SEARCH FUNCTION - Finds element position (O(n))
int array1d_search(int key) {
    for (int i = 0; i < array1d_size; i++) {
        if (array1d_arr[i] == key) return i;  // Return position if found
    }
    return -1;                    // Not found
}

// MAIN FUNCTION - Menu Driven Interface
int ARRAY1D_DSA() {
    int choice, pos, data;
    clrscr();
    
    cout << "=== 1D ARRAY DATA STRUCTURE DEMO ===\n";
    cout << "Capacity: " << array1d_capacity << " elements\n\n";
    
    do {
        // MENU DISPLAY
        cout << "\n=== 1D ARRAY OPERATIONS ===" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Insert at Position" << endl;
        cout << "3. Delete from End" << endl;
        cout << "4. Delete from Position" << endl;
        cout << "5. Display Array" << endl;
        cout << "6. Search Element" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                array1d_insertEnd(data);
                break;
                
            case 2:
                cout << "Enter position (0-based): ";
                cin >> pos;
                cout << "Enter data: ";
                cin >> data;
                array1d_insertPos(pos, data);
                break;
                
            case 3:
                array1d_deleteEnd();
                break;
                
            case 4:
                cout << "Enter position to delete: ";
                cin >> pos;
                array1d_deletePos(pos);
                break;
                
            case 5:
                array1d_display();
                break;
                
            case 6:
                cout << "Enter element to search: ";
                cin >> data;
                pos = array1d_search(data);
                if (pos != -1) {
                    cout << data << " found at position " << pos << endl;
                } else {
                    cout << data << " not found" << endl;
                }
                break;
                
            case 7:
                cout << "\n=== PROGRAM TERMINATED ===\n";
                break;
                
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 7);
    
    return 0;
}
