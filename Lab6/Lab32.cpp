#include<iostream>
using namespace std;

class MeterCentimeter
{
private:
    int meter, centimeter;

public:
    MeterCentimeter() : meter(0), centimeter(0){}
    MeterCentimeter(int m, int c):meter(m), centimeter(c){}

   int return_meter(){return meter;}
   int return_centimeter(){return centimeter;}



};

class FeetInches
{
private:
    int feet, inch;

public:
    FeetInches(int f, int i)
    {
        feet = f;
        inch = i;

    }
    void returnValue()
{
    cout<<feet<<" feets, "<<inch<<" inches\n";
}



FeetInches(MeterCentimeter mc)
{
    int cent;
    float i;
    cent = (mc.return_meter()*100) + mc.return_centimeter();
    i = (float)(cent)/2.54;
    feet = (int)(i/12);
    inch = ((i/12)-feet)*12;
}

operator MeterCentimeter()
{
    float cent;int i;
    i  = feet*12 + inch;
    cent = float(i) * 2.54;
    int meter = int(cent/100);
    int centimeter = int(cent - float(meter*100));
    return MeterCentimeter(meter, centimeter);
}

void display()
{
    cout<<feet<<" feets and "<<inch<<" inches \n";
}
};

int main()
{
    MeterCentimeter m(3,65);
    FeetInches f(m);
    cout<<"Data in meter and centimeters :  "<<m.return_meter()<<" meters and "<<m.return_centimeter()<<" centimeters\n";
    cout<<"Data in feets and inches : ";
    f.display();
    FeetInches f1(7, 8);
    MeterCentimeter m1;
    m1 = f1;
    cout<<"Data in feets and inches : ";f1.returnValue();
    cout<<"Data in meter and centimeters :  "<<m1.return_meter()<<" meters and "<<m1.return_centimeter()<<" centimeters\n";
    cin.get();
    return 0;
}
