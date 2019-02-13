#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14

class Circle
{
private:
    float radius;
public:
    void setRadius()
    {
        float radius;
        cout<<"Enter the radius of circle : ";
        cin>>radius;
        if (radius < 0)
        {
            cout<<"Circle:"<<endl<<"No circle defined"<<endl;
        }
        else if (radius == 0)
        {
            cout<<"Circle: "<<endl<<"Point circle"<<endl;
        }
        else
        {
            this->radius = radius;
        }
    }
    float area()
    {
        return PI*this->radius*this->radius;
    }
    float perimeter()
    {
        return 2*PI*this->radius;
    }
    void display()
    {
        cout<<"Circle :"<<endl;
        cout<<"Radius : "<<this->radius<<endl;
        cout<<"Area : "<<area()<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
    }
};
class Triangle
{
private:
    float l1, l2, l3;

public :
    void setSides()
    {
        float a,  b, c;
        cout<<"Enter sides of triangle :";
        cin>>a>>b>>c;
        if(a < (b+c) && b < (a+c) && c < (a+b))
        {
            l1 = a;
            l2 = b;
            l3 =c;
        }
        else
        {
            cout<<"Triangle :"<<endl;
            cout<<"Invalid Triangle"<<endl;
        }
    }
    float perimeter()
    {
        return l1+l2+l3;
    }
    float area()
    {
        float p = perimeter()/2;
        return sqrt(p*(p-l1)*(p-l2)*(p-l3));
    }
    void display()
    {
        cout<<"Triangle :"<<endl;
        cout<<"Sides : "<<l1<<","<<l2<<" and "<<l3<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
        cout<<"Area : "<<area()<<endl;
    }

};
class Rectangle
{
private:
    float length, breadth;

public:
    void setValue()
    {
        float m, n;
        cout<<"Enter length and breadth of rectangle : ";
        cin>>m>>n;
        if (m>0 and n>0)
        {
            length = m;
            breadth = n;
        }

        else
        {
            cout<<"Rectangle : "<<endl;
            cout<<"Length and Breadth invalid"<<endl;
        }
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
    float area()
    {
        return length*breadth;
    }
    void display()
    {
        cout<<"Rectangle :"<<endl;
        cout<<"Length : "<<length<<", Breadth : "<<breadth<<endl;
        cout<<"Perimeter : "<<perimeter()<<endl;
        cout<<"Area : "<<area()<<endl;
    }
};

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    circle.setRadius();
    rectangle.setValue();
    triangle.setSides();
    cout<<endl;
    circle.display();
    cout<<endl;
    rectangle.display();
    cout<<endl;
    triangle.display();
    cout<<endl;
    cin.get();
    return 0;
}
