#include<iostream>
#include<typeinfo>
using namespace std;

class Vehicle
    {
    public:
        virtual void display() {}
    };

class Bus : public Vehicle{};
class Car : public Vehicle{};
class Bike : public Vehicle{};

int main()
{
    Vehicle *vehicle[3];
    Bus *bus,bus1;
    Car *car,car1;
    Bike *bike,bike1;
    string name[3] = {"bus", "car", "bike"};
    cout<<"\nFinding types with polymorphic types\n";
    vehicle[0] = &bus1;
    bus = dynamic_cast<Bus*>(vehicle[0]);
    vehicle[1] = &car1;
    car = dynamic_cast<Car*>(vehicle[1]);
    vehicle[2] = &bike1;
    bike  = dynamic_cast<Bike*>(vehicle[2]);
    for(int i = 0;i<3;i++)
    {
    cout<<"Type of *vehicle when pointing to ";
    cout<<name[i]<<" : "<<typeid(*vehicle[i]).name()<<endl;
    }
    cin.get();
    return 0;
}
