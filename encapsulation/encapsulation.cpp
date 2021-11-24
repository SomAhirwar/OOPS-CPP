#include <iostream>
#include <string>

using namespace std;

// In encapsulation, the variables or data of a class is hidden from any other class
// and can be accessed only through any member function of its own class in which
// it is declared.

// Encapsulation can be achieved by Declaring all the variables in the class as private
// and writing public methods in the class to set and get the values of variables

//Idea of encapsulation is to access or set the private data in the way
//we want it to access or set it
//i.e. Defing Validator in data setting or processing data internally before returning it.

class Employee
{
private:
    int Age;
    string Name, Company;

public:
    Employee()
    {
        Age = -1;
        Name = Company = "Undefined";
    }

    void setName(string name)
    {
        if (!name.empty()) //validators
            Name = name;
    }

    void setAge(int age)
    {
        if (age >= 18) //validators
            Age = age;
    }

    void setCompany(string company)
    {
        if (!company.empty()) //validators
            Company = company;
    }

    string getName()
    {
        return Name;
    }

    string getCompany()
    {
        return Company;
    }

    int getAge()
    {
        return Age;
    }
};

int main()
{
    Employee e;
    e.setAge(30);
    e.setName("Santa");
    e.setCompany("CodeNation");

    e.setAge(14); //Not work due to validator

    cout << "Name - " << e.getName() << endl;
    cout << "Age - " << e.getAge() << endl;
    cout << "Company - " << e.getCompany() << endl;

    return 0;
}

// OUTPUT
// Name - Santa
// Age - 30
// Company - CodeNation