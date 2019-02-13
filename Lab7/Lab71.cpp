#include <iostream>
#include <cmath>
using  namespace std;
class shape
{
public:
    virtual float area() {}
    virtual void display() {};
    virtual ~shape()
    {
        cout<<"Destructor of class shape called "<<endl;
    }
};
class Circle:public shape
{
    float radius;
public:
    Circle() {};
    Circle(float a)
    {
        radius=a;
    }
    float area()
    {
        return M_PI*radius*radius;
    }
    void display()
    {
        cout<<"Shape : Circle ,Area : "<<area()<<" sq. units"<<endl;
    }
    ~Circle()
    {
        cout<<"Destructor of circle called "<<endl;
    }
};

class Rectangle:public shape
{
    float l,b;
public:
    Rectangle() {};
    Rectangle(float x,float y)
    {
        l=x;
        b=y;
    }
    float area()
    {
        return l*b;
    }
    void display()
    {
        cout<<"Shape : Rectangle, Area : "<<area()<<" sq. units"<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor of rectangle called "<<endl;
    }
};
class Trapezoid:public shape
{
    float length1,length2,height;
public:
    Trapezoid() {};
    Trapezoid(float l1,float l2,float h)
    {
        length1=l1;
        length2=l2;
        height=h;
    }
    float area()
    {
        return (length1+length2)*height*0.5f;
    }
    void display()
    {
        cout<<"Shape : Trapezoid, Area : "<<area()<<" sq. units"<<endl;
    }
    ~Trapezoid()
    {
        cout<<"Destructor of trapezoid called "<<endl;
    }
};
int main()
{
    shape *a;
    a=new Circle(2.5);
    a->display();
    delete(a);cout<<"\n";
    a=new Rectangle(4,5);
    a->display();
    delete(a);cout<<"\n";
    a=new Trapezoid(2,3,5);
    a->display();
    delete(a);cout<<"\n";
    cin.get();
    return 0;
}
