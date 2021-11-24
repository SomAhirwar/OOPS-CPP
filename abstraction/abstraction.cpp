#include <iostream>
#include <string>

using namespace std;

// Data abstraction refers to providing only essential information
// about the data to the outside world, hiding the background details or implementation.

// Consider a real life example of a man driving a car.
// The man only knows that pressing the accelerators will increase the speed of car or
// applying brakes will stop the car but he does not know about how on pressing accelerator
// the speed is actually increasing, he does not know about the inner mechanism of the car
// or the implementation of accelerator, brakes etc in the car.
// This is what abstraction is.

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

    void introduce()
    {
        cout << "Name - " << getName() << endl;
        cout << "Age - " << getAge() << endl;
        cout << "Company - " << getCompany() << endl;
    }
};

int main()
{
    Employee e;
    e.setAge(30);
    e.setName("Santa");
    e.setCompany("CodeNation");

    //We do not care how introduce function works, we only cares what introduce function of employee do
    e.introduce();

    return 0;
}

// OUTPUT
// Name - Santa
// Age - 30
// Company - CodeNation