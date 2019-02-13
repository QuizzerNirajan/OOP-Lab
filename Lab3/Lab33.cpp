#include<iostream>
using namespace std;

class CarPark{
private:
    int carId;
    int chargePerHour;
    float time;
public:
    void setCarId(int id){
    carId = id;
    }
    void setCharge(int charge)
    {
        chargePerHour = charge;
    }
    void setTime(int t){
    time = t;
    }
    int getCarId(){
    return carId;
    }
     int getCharge(){
    return chargePerHour;
    }
     int getTime(){
    return time;
    }
    int getTotalCharge(){
    return time*chargePerHour;
    }
    void displayInfo(){
    cout << "CarId : " << getCarId() << endl;
    cout << "Charge/hour : "<< getCharge() << endl;
    cout << "Time parked : "<< getTime() << endl;
    cout << "Total charge: "<< getTotalCharge() << endl;
    }
};
int main(){
    CarPark carpark;
    int id,charge,hour;
    cout<<"Enter  car id : ";cin>>id;
    cout<<"Enter  charge per hour : ";cin>>charge;
    cout<<"Enter  time : ";cin>>hour;
    cout<<endl;
    carpark.setCarId(id);
    carpark.setCharge(charge);
    carpark.setTime(hour);
    carpark.getTotalCharge();
    carpark.displayInfo();
    return 0;
    cin.get();
    }
