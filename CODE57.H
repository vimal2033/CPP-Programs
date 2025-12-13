/* 
   QUEUE OPERATIONS - COMPLETE IMPLEMENTATION

   Queue Operations: insertion (enqueue), deletion (dequeue),
   and traversal using unique queue1d_ prefixed functions.
*/

// GLOBAL VARIABLES FOR QUEUE (SPECIFIC NAMES)
int queue1d_capacity = 6;      // Maximum queue size
int queue1d_arr[6];            // Array to store queue elements
int queue1d_front = -1;        // Front pointer (first element)
int queue1d_rear  = -1;        // Rear pointer (last element)

// DISPLAY FUNCTION - Shows all queue elements
void queue1d_display() {
    if (queue1d_front == -1) {   // Check if queue is empty
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = queue1d_front; i <= queue1d_rear; i++) {  // From front to rear
        cout << queue1d_arr[i];
        if (i < queue1d_rear) cout << " <- ";
    }
    cout << endl;
}

// INSERTION (ENQUEUE) - Adds element at rear end
void queue1d_insert(int data) {
    if (queue1d_rear == queue1d_capacity - 1) {  // Check for overflow
        cout << "Queue Overflow! Cannot insert " << data << endl;
        return;
    }
    if (queue1d_front == -1) {    // First element
        queue1d_front = 0;
    }
    queue1d_arr[++queue1d_rear] = data;  // Add at rear and increment
    cout << data << " inserted successfully" << endl;
}

// DELETION (DEQUEUE) - Removes element from front
void queue1d_delete() {
    if (queue1d_front == -1) {   // Check for underflow
        cout << "Queue Underflow! Cannot delete" << endl;
        return;
    }
    cout << queue1d_arr[queue1d_front] << " deleted successfully" << endl;
    queue1d_front++;             // Move front pointer forward

    // Reset if queue becomes empty
    if (queue1d_front > queue1d_rear) {
        queue1d_front = -1;
        queue1d_rear  = -1;
    }
}

// CHECK IF QUEUE IS EMPTY  (return 1 = true, 0 = false)
int queue1d_isEmpty() {
    if (queue1d_front == -1)
        return 1;
    else
        return 0;
}

// MAIN FUNCTION - Menu Driven Interface
void QUEUE_DSA() {
    int choice, data;
    clrscr();
    cout << "=== QUEUE DATA STRUCTURE DEMO ===\n";
    cout << "Capacity: " << queue1d_capacity << " elements\n\n";

    do {
        // MENU DISPLAY
        cout << "\n=== QUEUE OPERATIONS ===" << endl;
        cout << "1. Insert (Enqueue)" << endl;
        cout << "2. Delete (Dequeue)" << endl;
        cout << "3. Display Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                queue1d_insert(data);
                break;

            case 2:
                queue1d_delete();
                break;

            case 3:
                queue1d_display();
                break;

            case 4:
                cout << "\n=== PROGRAM TERMINATED ===\n";
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    getch();
}
