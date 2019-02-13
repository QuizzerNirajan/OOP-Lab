#include<iostream>
using namespace std;

class Vehicle
{
private :
    int num_vehicle, hour;
    float rate;

public :
    Vehicle(int n, int h, float r)
    {
    num_vehicle = n;
    hour = h;
    rate = r;
    }
    Vehicle(Vehicle &v)
    {
        num_vehicle = v.num_vehicle;
        hour = v.hour;
        rate = v.rate;
    }

    float getTotal()
    {
        float total = num_vehicle*hour*rate;
        if(num_vehicle > 10)
        {
            total *= 0.9;
        }
        return total;

    }
     void display()
  {
    cout << "No of vehicle " << num_vehicle << endl;
    cout << "No of hours " << hour << endl;
    cout << "Charge " << rate << endl;
    cout << "Total " << getTotal() << endl;
  }
};

int main()
{
  Vehicle v1(12,5,5);
  cout << "Object constructed via constructor" << endl;
  v1.display();
  Vehicle v2= v1;
  cout << "Object constructed via copy constructor" << endl;
  v2.display();
  cin.get();
  return 0;
}

