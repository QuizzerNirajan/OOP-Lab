#include<iostream>
using namespace std;

class Employee{
 private :
 int empId, empBonus, empOvertime, empYear;

 public :
   void setpara(int id,int bonus, int overtime, int year)
   {
       empId = id;
       empBonus = bonus;
       empOvertime = overtime;
       empYear = year;
   }
void displayreport()
{
    cout<<endl<<"Employee with id "<<empId<<" has received Rs."<<empBonus<<" as bonus and had worked "<<empOvertime<<" hours as a over time in year "<<empYear;
}
};

int main()
{
    int n, id, bonus, overtime, year;
    cout<<"Enter the no of employees : ";cin>>n;
   Employee emp[n];
   for(int i=0;i<n;i++)
    {
    cout<<"Employee id : ";cin>>id;
    cout<<"Employee bonus : ";cin>>bonus;
    cout<<"Employee overtime : ";cin>>overtime;
    cout<<"Year : ";cin>>year;
    emp[i].setpara(id, bonus, overtime, year);
    }

    for(int i = 0; i<n; i++)
        {
        emp[i].displayreport();
    }
cin.get();
return 0;
}
