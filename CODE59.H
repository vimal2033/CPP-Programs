/* 
   LINKED LIST OPERATIONS - COMPLETE IMPLEMENTATION

   Singly Linked List: Implementation with insertion at end, 
   deletion from beginning, and traversal using unique list1d_ prefixed names.
*/


// NODE STRUCTURE FOR SINGLY LINKED LIST
struct list1d_node {
    int data;               // Stores value
    list1d_node* next;      // Pointer to next node
};

// GLOBAL POINTER TO HEAD NODE
list1d_node* list1d_head = NULL;   // Start of the linked list

// TRAVERSAL - Display all nodes in the list
void list1d_traversal() {
    if (list1d_head == NULL) {     // Check if list is empty
        cout << "Linked List is empty" << endl;
        return;
    }

    cout << "Linked List: ";
    list1d_node* temp = list1d_head;   // Start from head
    while (temp != NULL) {             // Traverse till end
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;             // Move to next node
    }
    cout << endl;
}

// INSERTION AT END - Adds new node at last (O(n))
void list1d_insertEnd(int value) {
    // Create new node
    list1d_node* newNode = new list1d_node;
    newNode->data = value;
    newNode->next = NULL;

    // If list is empty, new node becomes head
    if (list1d_head == NULL) {
        list1d_head = newNode;
        cout << value << " inserted as first node" << endl;
        return;
    }

    // Otherwise, traverse to last node
    list1d_node* temp = list1d_head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Attach new node at end
    temp->next = newNode;
    cout << value << " inserted at end" << endl;
}

// DELETION FROM BEGINNING - Removes first node (O(1))
void list1d_deleteBegin() {
    if (list1d_head == NULL) {     // Underflow check
        cout << "Linked List Underflow! Nothing to delete" << endl;
        return;
    }

    list1d_node* temp = list1d_head;       // Store current head
    list1d_head = list1d_head->next;       // Move head to next node
    cout << temp->data << " deleted from beginning" << endl;
    delete temp;                           // Free memory
}

// MAIN FUNCTION - Menu Driven Interface
void LINKED_LIST_DSA() {
    int choice, value;
    clrscr();
    cout << "=== LINKED LIST DATA STRUCTURE DEMO ===\n\n";

    do {
        // MENU DISPLAY
        cout << "=== LINKED LIST OPERATIONS ===" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Delete from Beginning" << endl;
        cout << "3. Traverse (Display)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list1d_insertEnd(value);
                break;

            case 2:
                list1d_deleteBegin();
                break;

            case 3:
                list1d_traversal();
                break;

            case 4:
                cout << "\nProgram terminated.\n";
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << endl;
    } while (choice != 4);

    getch();
}
