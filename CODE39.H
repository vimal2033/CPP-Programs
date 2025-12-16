/*
Title: FRIEND CLASS DEMONSTRATION

Description: This C++ program demonstrates the concept of friend class.
A friend class can access private and protected members of another class.
Here, FriendClass can access private data members of TestClass.
*/

class TestClass {
private:
    int secretData;

public:
    // Constructor
    TestClass(int data) {
        secretData = data;
    }

    // Declare FriendClass as a friend
    friend class FriendClass;
};

class FriendClass {
public:
    // Friend function that can access private members of TestClass
    void accessPrivate(TestClass& obj) {
        // Accessing private member of TestClass (normally not allowed)
        cout << "FriendClass accessing private data: " << obj.secretData << endl;
        obj.secretData = 999;  // Modifying private data
        cout << "Private data modified to: " << obj.secretData << endl;
    }
};

void FriendCall() {
    clrscr();
    // Create object of TestClass
    TestClass obj(100);

    // Create object of FriendClass
    FriendClass friendObj;

    // Friend class can access private members
    friendObj.accessPrivate(obj);

    getch();
}
