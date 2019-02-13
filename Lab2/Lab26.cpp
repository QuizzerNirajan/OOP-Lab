#include<iostream>
#include<iomanip>
using namespace std;

float currentSalary(float salary,  float increment = 12){
return salary + (salary/100)*12 ;
}

int main()
{
    cout<<"The respective salaries are : "<<endl;
    cout<<"Chief Executive Officer : Rs."<<<<currentSalary(35000,9)<<endl;
    cout<<"Information Officer : Rs."<<currentSalary(25000,10)<<endl;
    cout<<"System Analyst : Rs."<<currentSalary(24000)<<endl;
    cout<<"Programmer: Rs."<<currentSalary(18000)<<endl;
    cin.get();
    return 0;
}
