#include<iostream>
using namespace std;

 class Number
 {
 private :
    int no;

 public:
    Number(int a) : no(a){};

    bool operator ==(Number n)
    {
        if(n.no == no)
            return true;
        else
            return false;
    }

    bool operator <(Number n)
    {
        if(no < n.no)
            return true;
        else
            return false;
    }
     bool operator >(Number n)
    {
        if(no > n.no)
            return true;
        else
            return false;
    }
     bool operator <=(Number n)
    {
        if(no <= n.no)
            return true;
        else
            return false;
    }
     bool operator >=(Number n)
    {
        if(no >= n.no)
            return true;
        else
            return false;
    }
     bool operator !=(Number n)
    {
        if(no != n.no)
            return true;
        else
            return false;
    }
 };

 int main()
 {
     int a;
     cout<<"Enter integer number for object  n1 : "; cin>>a;
      Number n1(a);
     cout<<"Enter integer number for object n2 : "; cin>>a;
     Number n2(a);

     if(n1 == n2)
     cout<<"Object n1 and n2 are equal"<<endl;

     if(n1 < n2)
     cout<<"Object n1 is less than n2"<<endl;

     if(n1 > n2)
     cout<<"Object n1 is greater than n2"<<endl;

     if(n1 <= n2)
     cout<<"Object n1 is less than or equal to n2"<<endl;

     if(n1 >= n2)
     cout<<"Object n1 is greater than or equal to n2"<<endl;

     if(n1 != n2)
     cout<<"Object n1 and n2 are not equal"<<endl;
     cin.get();
     return 0;
 }
