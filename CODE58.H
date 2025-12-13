/* 
   STACK OPERATIONS - COMPLETE IMPLEMENTATION
   
   Stack Operations: Complete implementation with insertion (push), 
   deletion (pop), and traversal using unique stack1d_ prefixed functions.
*/


// GLOBAL VARIABLES FOR STACK (SPECIFIC NAMES)
int stack1d_capacity = 6;      // Maximum stack size
int stack1d_arr[6];            // Array to store stack elements
int stack1d_top = -1;          // Top pointer (last element)

// DISPLAY FUNCTION - Shows all stack elements
void stack1d_display() {
    if (stack1d_top == -1) {   // Check if stack is empty
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= stack1d_top; i++) {  // From bottom to top
        cout << stack1d_arr[i];
        if (i < stack1d_top) cout << " <- ";
    }
    cout << endl;
}

// INSERTION (PUSH) - Adds element at top (O(1))
void stack1d_push(int data) {
    if (stack1d_top == stack1d_capacity - 1) {  // Check for overflow
        cout << "Stack Overflow! Cannot push " << data << endl;
        return;
    }
    stack1d_arr[++stack1d_top] = data;  // Increment top and add element
    cout << data << " pushed successfully" << endl;
}

// DELETION (POP) - Removes element from top (O(1))
void stack1d_pop() {
    if (stack1d_top == -1) {     // Check for underflow
        cout << "Stack Underflow! Cannot pop" << endl;
        return;
    }
    cout << stack1d_arr[stack1d_top] << " popped successfully" << endl;
    stack1d_top--;               // Decrement top pointer
}

// PEEK - Shows top element without removing
void stack1d_peek() {
    if (stack1d_top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Top element: " << stack1d_arr[stack1d_top] << endl;
}

// MAIN FUNCTION - Menu Driven Interface
void STACK_DSA() {
    int choice, data;
    clrscr();
    cout << "=== STACK DATA STRUCTURE DEMO ===\n";
    cout << "Capacity: " << stack1d_capacity << " elements\n\n";
    
    do {
        // MENU DISPLAY
        cout << "\n=== STACK OPERATIONS ===" << endl;
        cout << "1. Push (Insert)" << endl;
        cout << "2. Pop (Delete)" << endl;
        cout << "3. Display Stack" << endl;
        cout << "4. Peek (Top Element)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                stack1d_push(data);
                break;
                
            case 2:
                stack1d_pop();
                break;
                
            case 3:
                stack1d_display();
                break;
                
            case 4:
                stack1d_peek();
                break;
                
            case 5:
                cout << "\n=== PROGRAM TERMINATED ===\n";
                break;
                
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    
    getch();
}
