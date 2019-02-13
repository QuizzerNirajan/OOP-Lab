#include<iostream>
#include<cstring>
using namespace std;


class Person
{
protected:
    string name;
    int age;

public:
    void getPData()
    {
        cout<<"Enter name : ";cin>>name;
        cout<<"Enter age : ";cin>>age;
    }

    void showPData()
    {
        cout<<"Name : "<<name<<"\n";
        cout<<"Age : "<<age<<"\n";
    }
};

class Employee:virtual public Person
{
protected:
    float salary;
    int wHours ;
public:
    void getData()
    {
        cout<<"Enter working hours :";cin>>wHours;
        cout<<"Enter salary : ";cin>>salary;

    }
    void showData()
    {
        cout<<"Working hours : "<<wHours<<"\n";
        cout<<"Salary : Rs"<<salary<<"\n";
    }

};
class Student:virtual public Person
{
protected:
    int percentage, cHours;
public:
    void getData()
    {
        cout<<"Enter class hours :";cin>>cHours;
        cout<<"Enter percentage : ";cin>>percentage;
    }
    void showData()
    {
        cout<<"Class hours : "<<cHours<<"\n";
        cout<<"Percentage : "<<percentage<<"%\n";
    }

};

class Manager : public Employee, public Student
{
    public:
    void getData()
    {
        Employee::getData();
        Student::getData();
    }

    void showData()
    {
        Employee::showData();
        Student::showData();
    }

    int totalHours()
    {
        return wHours + cHours;
    }
};

int main()
{
    Manager m;
    cout<<"Data for Person :\n";
    m.getPData();
    cout<<"\nFurther details : \n";
    m.getData();
    cout<<"\n\n\nData for Person is : \n";
    m.showPData();
    m.showData();
    cout<<"Total Person Hours : "<<m.totalHours();
    cin.get();
    return 0;
}
