#include <iostream>
#include <string>

using namespace std;

class Employee
{
    //Constuctor can be overloaded if they have different arrgument data types of different numbers of data types
private:
    string name, company;
    int age;

public:
    Employee()
    {
        name = "Undefined";
        company = "Undefined";
        age = -1;
    }

    //Overloaded Constructor
    Employee(string name, int age)
    {
        this->name = name;
        this->age = age;
        company = "Undefined";
    }

    //Overloaded Constructor
    Employee(string name, string company, int age)
    {
        this->name = name;
        this->age = age;
        this->company = company;
    }

    void print()
    {
        cout << "Name - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "Age - " << age << endl;
    }
};

int main()
{
    Employee e1; //Default Contructor Assign gabage values to data memebers of e1
    e1.print();
    Employee e2("Santa", 15); //Overloaded Contructor
    e2.print();
    Employee e3("Banta", "Google", 15); //Overloaded Constructor
    e3.print();
    return 0;
}