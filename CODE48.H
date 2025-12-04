/*
Title: VIRTUAL FUNCTION

Description: C++ program demonstrating virtual function with runtime polymorphism.
Base class pointer calls derived class function using virtual keyword.
*/


class Shape
{
public:
    // Virtual function
    virtual void display()
    {
        cout<<"This is base class Shape"<<endl;
    }
};

class Circle : public Shape
{
public:
    void display()
    {
        cout<<"This is Circle (Derived class)"<<endl;
    }
};

class Rectangle : public Shape
{
public:
    void display()
    {
        cout<<"This is Rectangle (Derived class)"<<endl;
    }
};

void VirtualFunction()
{
    clrscr();

    Shape *ptr;
    Circle c;
    Rectangle r;

    ptr = &c;
    ptr->display();  // Calls Circle::display()

    ptr = &r;
    ptr->display();  // Calls Rectangle::display()

    getch();
}
