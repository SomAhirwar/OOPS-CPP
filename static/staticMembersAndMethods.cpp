#include <iostream>
#include <string>

using namespace std;

//Properties of Data Members:
//Declaring a data member in a class as static gives it class-scope. i.e.
// The variable no longer remains specific and bound to one particular object instance.
// Thereafter, changing the value from one instance reflects over all the instances.

// initialization statement of static member works regardless of whether we declare the static variable as public, private or protected.

//static members are only declared in a class declaration, not defined. They must be explicitly defined outside the class using the scope resolution operator.

//Properties of Member Function

// Static member-functions can't access non-static data-members.
// Static member-functions can't access other non-static member-functions.
// Static member-functions have no *this pointer, as it is not associated with any particular instance.
// There is no concept of a static constructor.
// Static member-functions are useful for accessing static data-members which are not declared public.

class Test
{
private:
    static int X; //X is only declared, not defined, so no memory allocated yet

public:
    static void setX(int n)
    {
        X = n;
    }

    static int getX()
    {
        return X;
    }
};

//Initialzatin of static function is valid although X is private
int Test::X = 10; //X is defined, memory allocated

int main()
{
    cout << Test::getX() << endl;
    Test::setX(50);
    cout << Test::getX() << endl;
    // cout << Test::X << endl; **NOT ALLOW**  //only can initialize private static member, but not access

    return 0;
}

// OUTPUT:
// 10
// 50