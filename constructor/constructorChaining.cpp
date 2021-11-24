#include <iostream>
#include <string>

using namespace std;

class Employee
{
    //Constuctor can be overloaded if they have different arrgument data types of different numbers of data types
private:
    string Name, Company;
    int Age;

public:
    Employee()
    {
        Name = "Undefined";
        Company = "Undefined";
        Age = -1;
    }

    Employee(string name) : Name(name) {}

    //Constructor chained
    Employee(string name, int age) : Employee(name)
    {
        Age = age;
    }

    //Constructor Chained
    Employee(string name, string company, int age) : Employee(name, age)
    {
        Company = company;
    }

    void print()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
};

int main()
{
    Employee e1;
    e1.print();
    Employee e2("Santa");
    e2.print();
    Employee e3("Banta", "Google", 15);
    e3.print();
    return 0;
}