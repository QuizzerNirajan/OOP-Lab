#include<iostream>
using namespace std;

class Point
{
private:
    int x, y, z;

public:
    Point() {};
    Point(int x1,int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    void display()
    {
        cout<<"("<<x<<","<<y<<","<<z<<")";
    }

    friend Point operator+(Point p1, Point p2);
    friend Point operator-(Point p1, Point p2);
};
Point operator+(Point p1, Point p2)
{
    Point p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    p.z = p1.z + p2.z;
    return p;
}

Point operator-(Point p1, Point p2)
{
    Point p;
    p.x = p1.x - p2.x;
    p.y = p1.y - p2.y;
    p.z = p1.z - p2.z;
    return p;
}
int main()
{
    Point p1, p2, p3;
    p1 = Point(3,4,5);
    p2 = Point(1,2,3);
    p3 = p1 + p2;
    p1.display();
    cout<< " + " ;
    p2.display();
    cout << " = ";
    p3.display() ;
    cout<<endl;
    p3 = p1 - p2;
    p1.display();
    cout<< " - " ;
    p2.display();
    cout << " = ";
    p3.display() ;
    cout<<endl;
    cin.get();
    return 0;

}
