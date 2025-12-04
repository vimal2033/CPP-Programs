/*
Title: MULTIPATH INHERITANCE

Description: C++ program demonstrating multipath inheritance using
virtual base class to avoid diamond problem ambiguity.
*/


class PersonMP
{
public:
    char name[20];
    int code;

    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter code: ";
        cin>>code;
    }

    void displayPerson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
    }
};

class AccountMP : virtual public PersonMP
{
public:
    float pay;

    void getpay()
    {
        cout<<"Enter pay: ";
        cin>>pay;
    }

    void displayAccount()
    {
        cout<<"Pay: "<<pay<<endl;
    }
};

class AdminMP : virtual public PersonMP
{
public:
    int experience;

    void getexp()
    {
        cout<<"Enter experience: ";
        cin>>experience;
    }

    void displayAdmin()
    {
        cout<<"Experience: "<<experience<<endl;
    }
};

class MasterMP : public AccountMP, public AdminMP
{
public:
    char company[20];

    void getcompany()
    {
        cout<<"Enter company name: ";
        cin>>company;
    }

    void displayMaster()
    {
        PersonMP::displayPerson();
        displayAccount();
        displayAdmin();
        cout<<"Company: "<<company<<endl;
        cout<<"-------------------"<<endl;
    }
};

void MultipathInharitance()
{
    clrscr();

    MasterMP m1;
    m1.input();
    m1.getpay();
    m1.getexp();
    m1.getcompany();

    cout<<"\nMaster Information:"<<endl;
    m1.displayMaster();

    getch();
}
