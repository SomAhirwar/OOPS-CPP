#include <iostream>
#include <string>

using namespace std;

// Every class has a default copy constructor
// which assign every data member of one class to another class respectively
// But default constructor fails if any of the data member of class is pointer
// Because copy constructor just set the pointer of one instance to
// same address as member of another instance
// Changes in ones object data member reflect on other which leads to shallow copy
// To avoid this problem and make a deep copy of constructor, we create our own copy constructor

class Employee
{
    int *age;
    string name, company;

public:
    Employee()
    {
        name = company = "Undefined";
        age = new int(-1);
    }

    Employee(string name, string company, int age)
    {
        this->name = name;
        this->age = new int(age);
        this->company = company;
    }

    //Copy constructor
    Employee(Employee &e)
    {
        //In copy constructor, argument Object must passed as refference otherwise infinite reccursion wil be caused
        name = e.getName();
        company = e.getCompany();
        age = new int(e.getAge());
    }

    string getName()
    {
        return name;
    }

    string getCompany()
    {
        return company;
    }

    int getAge()
    {
        return *age;
    }

    void setAge(int ag)
    {
        *age = ag;
    }

    void print()
    {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << *age << endl;
        cout << age << endl;
    }
};

int main()
{
    cout << "----------------e1--------------------\n";
    Employee e1("Santa", "Google", 15);
    e1.print();

    //Copy Constructor
    cout << "\n----------------e2--------------------\n";
    Employee e2(e1);
    e2.print();

    cout << "\n----------------e3--------------------\n";
    //Copy Constructor
    Employee e3 = e1;
    e3.print();

    cout << "\n----------------e4--------------------\n";
    //Not a copy construtor;
    Employee e4;
    e4 = e1;
    e4.print();

    e1.setAge(18);
    cout << "\nAfter Change\n";
    cout << "\n----------------e1--------------------\n";
    e1.print();
    cout << "\n----------------e2--------------------\n";
    e2.print();
    cout << "\n----------------e3--------------------\n";
    e3.print();
    cout << "\n----------------e4--------------------\n";
    e4.print();

    return 0;
}

//Output

// ----------------e1--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x603070

// ----------------e2--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x603090

// ----------------e3--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x6030b0

// ----------------e4--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x603070

// After Change

// ----------------e1--------------------
// Name - Santa
// Company - Google
// Age - 18
// 0x603070

// ----------------e2--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x603090

// ----------------e3--------------------
// Name - Santa
// Company - Google
// Age - 15
// 0x6030b0

// ----------------e4--------------------
// Name - Santa
// Company - Google
// Age - 18