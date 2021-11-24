#include <iostream>

using namespace std;
////////////////////PURE VIRTUAL FUNCTION//////////////////////
// Sometimes implementation of all function cannot be provided in a base class because
// we don’t know the implementation. Such a class is called abstract class.
// For example, let Shape be a base class. We cannot provide implementation of function getArea() in Shape,
// but we know every derived class must have implementation of getArea().

//We cannot create objects of abstract classes.

//A pure virtual function is declared by assigning 0 in declaration

//////////////////ABSTRACTION///////////////////
// We know that class Squre, Rectangle and circle inherit AbstractShape class,
// which has Pure virtual function in it,
// So we can conclude that all three Dervied class(Squre, Rectangle and Circle) has getArea function
// without worring about how does thost function works.

class AbstractShape
{
public:
    virtual int getArea() = 0; //Pure virtual function
};

class Squre : AbstractShape
{
private:
    int Length;

public:
    Squre(int length)
    {
        Length = length;
    }

    int getArea() //This pure virtual function must fe defined in derived class, otherwise we cannot create object of derived class.
    {
        return Length * Length;
    }
};

class Circle : AbstractShape
{
private:
    int Radius;

public:
    Circle(int radius)
    {
        Radius = radius;
    }
    int getArea() //This pure virtual function must fe defined in derived class, otherwise we cannot create object of derived class.
    {
        return 3.14 * Radius * Radius;
    }
};

class Reactangle : AbstractShape
{
private:
    int Length, Width;

public:
    Reactangle(int length, int width) : Length(length), Width(width) {}

    int getArea() //This pure virtual function must fe defined in derived class, otherwise we cannot create object of derived class.
    {
        return Length * Width;
    }
};

int main()
{
    Squre s(10);
    Reactangle r(10, 20);
    Circle c(7);
    cout << "Squre Area: " << s.getArea() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;
    cout << "Circle Area: " << c.getArea() << endl;
}

// OUTPUT:
// Squre Area: 100
// Rectangle Area: 200
// Circle Area: 153