/*
Title: FRIEND FUNCTION DEMONSTRATION

Description: This C++ program demonstrates the concept of friend function.
A friend function of a class can access private and protected members of that class.
Here, friendFunc() can access private data members of FriendDemoClass.
*/


class FriendDemoClass {
private:
    int secretData;

public:
    // Constructor
    FriendDemoClass(int data) {
        secretData = data;
    }

    // Declare friendFunc as a friend function
    friend void friendFunc(FriendDemoClass& obj);
};

void friendFunc(FriendDemoClass& obj) {
    // Friend function can access private members of FriendDemoClass
    cout << "Friend function accessing private data: " << obj.secretData << endl;
    obj.secretData = 888;  // Modifying private data
    cout << "Private data modified by friend function to: " << obj.secretData << endl;
}

void FriendFunctionCall() {
    clrscr();
    // Create object of FriendDemoClass
    FriendDemoClass obj(100);

    // Direct access to private data removed
    cout << "Friend function accessing private data: " << endl;

    // Call friend function
    friendFunc(obj);

    getch();
}


