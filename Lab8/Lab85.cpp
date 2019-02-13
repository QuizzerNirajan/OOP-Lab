#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
Complex()
{
    real = 0;
    imag = 0;
}
friend istream& operator>>(istream& is, Complex c);
friend ostream& operator>>(ostream& os, Complex c);
};

istream& operator>>(istream& is, Complex c)
{
    is>>c.real>>c.imag;
    return is;
}
ostream& operator<<(ostream& os, Complex c)
{
    os<<c.real<<"+i"<<c.imag<<flush;
    return os;
}

int main()
{
    Complex c1;
    cout<<"Enter the real and imaginary parts of complex number : ";
    cin>>c1;
    cout<<"The complex number is : "<<c1;
    return 0;
}

