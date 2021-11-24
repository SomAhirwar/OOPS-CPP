#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    Person()
    {
        cout << "Contructor1 is Called\n";
    }
    Person(string name, int age)
    {
        cout << "Constructor2 is Called\n";
        this->name = name;
        this->age = age;
    }
    void print()
    {
        cout << "Name - " << name << endl;
        cout << "Age - " << age << endl;
    }
};

//Normal initialization
class Employee
{
private:
    Person p; //Call constructor1 of Person class here
    string company;

public:
    Employee(string name, int age, string company)
    {
        p = Person(name, age); //Call Constructor2 of Preson class here
        this->company = company;
    }
    void print()
    {
        p.print();
        cout << "Company - " << company << endl;
    }
};

//Initialization using member initialization list
class Player
{
private:
    Person p; //Do not call Constructor
    string team;

public:
    Player(string name, int age, string teamArg) : p(name, age), team(teamArg) {} //Call Constructor2 of Preson class here

    void print()
    {
        p.print();
        cout << "team - " << team << endl;
    }
};

int main()
{
    cout << "--------------Normal Initilizaion---------------\n";
    Employee e1("Santa", 15, "Google"); //Normal Initialization

    cout << "\n--------------Member Initilizaion List---------------\n";
    Player p1("Banta", 15, "India"); //Initialization using member initialization list

    //From the above program , we can conclude
    //Initialization using member initilization list is better option because
    //it only calls one constructor
    return 0;
}

// Output:
// --------------Normal Initilizaion---------------
// Contructor1 is Called
// Constructor2 is Called

// --------------Member Initilizaion List---------------
// Constructor2 is Called