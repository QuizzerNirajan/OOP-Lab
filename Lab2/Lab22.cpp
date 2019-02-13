#include<iostream>
using namespace std;

void feetInches(){
cout<<"1 feet equals = 12 inches"<<endl;
}

void feetInches(int feet){
cout<<feet<<" feets = "<<feet*12<<" inches"<<endl;
}

void feetInches(int &feet1, int &feet2){
feet1*=12;
feet2*=12;
}
int main(){
    int a=5,b = 7;
feetInches();
feetInches(12);
feetInches(a, b);
cout<<"5 and 7 feets = "<<a<< " and "<<b<<" inches respectively"<<endl;
cin.get();
return 0;
}
