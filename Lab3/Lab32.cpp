#include<iostream>
using namespace std;

class Prime{
private :
int number;

public:
    void getNum(int num){
    number = num;
    }

    bool isPrime(){
        if (number == 1 || number==0)
            return false;
        else
        {
    for(int i=2;i<=number/2;i++){
      if (number%i==0)
        return false;
    }
    return true;
}
}
};
int main(){
int num1;char c;
do{
Prime prime;
cout<<"Enter a number? ";cin>>num1;
prime.getNum(num1);
if (prime.isPrime()==true)
{
cout<<num1<<" is Prime"<<endl;
}
else
{
    cout<<num1<<" is not Prime"<<endl;
}
    cout<<"Do you want to check another number?(y/n) ";cin>>c;
    cout<<endl;
}
while(c =='y');
return 0;
cin.get();
}




