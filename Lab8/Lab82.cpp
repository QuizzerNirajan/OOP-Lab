#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

class Manipulators
{
private :
    int width, precision;
    char fillChar;

public:
    Manipulators(int w, int p, char fc) : width(w), precision(p), fillChar(fc){}
    friend ostream& operator<<(ostream&, Manipulators);
};

ostream& operator<<(ostream& os, Manipulators object)
{
    os<<setw(object.width)<< setfill(object.fillChar)<<setprecision(object.precision);
    return os;
}

Manipulators setWfp(int w, int p, char fc)
{
    return Manipulators(w, p, fc);
}
int main()

{
 cout<<setWfp(7, 3, '*')<<5.60998;
 return 0;

}
