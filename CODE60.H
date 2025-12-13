/* 
   TREE (BINARY SEARCH TREE) OPERATIONS - COMPLETE IMPLEMENTATION

   Binary Search Tree: Insertion, deletion and traversal (inorder) 
   using unique bst1d_ prefixed names.
*/


// NODE STRUCTURE FOR BINARY SEARCH TREE
struct bst1d_node {
    int data;                 // Stores value
    bst1d_node* left;         // Pointer to left child
    bst1d_node* right;        // Pointer to right child
};

// GLOBAL POINTER TO ROOT NODE
bst1d_node* bst1d_root = NULL;   // Start (root) of the tree

// CREATE NEW NODE
bst1d_node* bst1d_createNode(int value) {
    bst1d_node* newNode = new bst1d_node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// INSERTION - Insert value into BST (O(h))
bst1d_node* bst1d_insert(bst1d_node* root, int value) {
    if (root == NULL) {                 // Empty place found
        return bst1d_createNode(value);
    }

    if (value < root->data) {           // Go to left subtree
        root->left = bst1d_insert(root->left, value);
    } else if (value > root->data) {    // Go to right subtree
        root->right = bst1d_insert(root->right, value);
    } else {
        cout << "Duplicate values not allowed in BST" << endl;
    }

    return root;                        // Return (unchanged) root pointer
}

// FIND MINIMUM NODE (used in deletion)
bst1d_node* bst1d_minValueNode(bst1d_node* node) {
    bst1d_node* current = node;
    while (current != NULL && current->left != NULL) {
        current = current->left;        // Go to leftmost node
    }
    return current;
}

// DELETION - Delete value from BST (O(h))
bst1d_node* bst1d_delete(bst1d_node* root, int value) {
    if (root == NULL) {                 // Value not found
        cout << "Value not found in tree" << endl;
        return root;
    }

    if (value < root->data) {           // Value in left subtree
        root->left = bst1d_delete(root->left, value);
    } else if (value > root->data) {    // Value in right subtree
        root->right = bst1d_delete(root->right, value);
    } else {
        // Node with the value found

        // Case 1: No child or only right child
        if (root->left == NULL) {
            bst1d_node* temp = root->right;
            cout << root->data << " deleted from tree" << endl;
            delete root;
            return temp;
        }
        // Case 2: Only left child
        else if (root->right == NULL) {
            bst1d_node* temp = root->left;
            cout << root->data << " deleted from tree" << endl;
            delete root;
            return temp;
        }

        // Case 3: Two children
        // Get inorder successor (smallest in right subtree)
        bst1d_node* temp = bst1d_minValueNode(root->right);
        // Copy successor's data to this node
        root->data = temp->data;
        // Delete the inorder successor
        root->right = bst1d_delete(root->right, temp->data);
    }
    return root;
}

// INORDER TRAVERSAL - Left, Root, Right (sorted order)
void bst1d_inorder(bst1d_node* root) {
    if (root == NULL) return;
    bst1d_inorder(root->left);
    cout << root->data << " ";
    bst1d_inorder(root->right);
}

// PREORDER TRAVERSAL - Root, Left, Right
void bst1d_preorder(bst1d_node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    bst1d_preorder(root->left);
    bst1d_preorder(root->right);
}

// POSTORDER TRAVERSAL - Left, Right, Root
void bst1d_postorder(bst1d_node* root) {
    if (root == NULL) return;
    bst1d_postorder(root->left);
    bst1d_postorder(root->right);
    cout << root->data << " ";
}

// MAIN FUNCTION - Menu Driven Interface
void TREE_DSA() {
    int choice, value;
    clrscr();
    cout << "=== BINARY SEARCH TREE DEMO ===\n\n";

    do {
        // MENU DISPLAY
        cout << "=== TREE (BST) OPERATIONS ===" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Delete Node" << endl;
        cout << "3. Inorder Traversal" << endl;
        cout << "4. Preorder Traversal" << endl;
        cout << "5. Postorder Traversal" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                bst1d_root = bst1d_insert(bst1d_root, value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                bst1d_root = bst1d_delete(bst1d_root, value);
                break;

            case 3:
                cout << "Inorder Traversal: ";
                bst1d_inorder(bst1d_root);
                cout << endl;
                break;

            case 4:
                cout << "Preorder Traversal: ";
                bst1d_preorder(bst1d_root);
                cout << endl;
                break;

            case 5:
                cout << "Postorder Traversal: ";
                bst1d_postorder(bst1d_root);
                cout << endl;
                break;

            case 6:
                cout << "\nProgram terminated.\n";
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << endl;
    } while (choice != 6);

    getch();
}
