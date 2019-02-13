#include<iostream>
using namespace std;

class Celcius{
private:
    float temperature;

public:
    float toFahrenheit(float temp){
    temperature = temp;
    return ((9*temperature)/5)+32;

    }
};

class Fahrenheit{
private:
    float temperature;

public:
    float toCelcius(float temp){
   temperature = temp;
  return (5*(temperature - 32))/9;
}
};

int main(){
float cel,fah;
cout<<"Enter the temperature in Celcius : ";cin>>cel;
cout<<"Enter the temperature in Fahrenheit : ";cin>>fah;
Celcius c1; Fahrenheit f1;
cout<<cel<<" Celcius = "<<c1.toFahrenheit(cel)<<" Fahreneheit"<<endl;
cout<<fah<<" Fahrenheit = "<<f1.toCelcius(fah)<<" Celcius"<<endl;
cin.get();
return 0;

}



