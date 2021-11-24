#include <iostream>
#include <string>

using namespace std;

class Employee
{
    //Default Constructor
    //Every class has default constructor if and only if there in no contructor defined within a class
private:
    string name, company;
    int age;

public:
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
    return 0;
}