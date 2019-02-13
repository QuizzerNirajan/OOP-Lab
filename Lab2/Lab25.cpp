#include<iostream>
using namespace std;

inline float income(float salary){
return salary-((10*salary)/100);
}

int main(){
float empSalary;
cout<<"Enter the employee salary? ";cin>>empSalary;
cout<<"The employee will be paid Rs."<<income(empSalary)<<endl;
cin.get();
return 0;
}
