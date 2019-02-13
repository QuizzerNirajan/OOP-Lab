#include<iostream>
using namespace std;

class Distance
{
private :
    int meters, centimeters;

public :
  Distance():meters(0), centimeters(0){}
  Distance(int m, int c): meters(m), centimeters(c){}

Distance (float met)
{
  meters = met;
  centimeters = (met - int(met))*100;
}

 void display()
 {
     cout<<meters<< "m, "<<centimeters<<"cm\n";

 }

 operator float()
 {
     float dist;
     dist = float(meters) + float(centimeters) / 100.0;
     return dist;

 }



};
int main()
{
    float distance, dd;
    cout<<"float to distance conversion i.e. basic to user-defined data type\n";
    dd = 10.77;
    Distance d;
    d = dd;
;    cout<<dd<<" = ";d.display();
    cout<<"\nDistance to float conversion i.e. user-defined to basic data type\n";
    int m = 1, c = 57;
    distance =  Distance(1 , 57);
    cout<<m<<" meters, "<<c<<" centimeters = "<<distance<<" meters\n";
    cin.get();
    return 0;

}
