#include<iostream>
using namespace std;
int &temperature(int&temp1, int&temp2){
if(temp1>temp2)
    return temp1;
else
    return temp2;
}

int main(){
int t1 = 75, t2 = 88;
temperature(t1, t2) = 100;
cout<<"The temperatures are "<<t1<<" and "<<t2<<endl;
cin.get();
return 0;
}
