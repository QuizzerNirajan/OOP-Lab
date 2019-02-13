/*
 * Write a program that illustrate the following relationship and comment the relationships.
 i) const_object.non_const_mem_function
 ii) const_object.const_mem_function
 iii) non_const_object.non_const_mem_function
 iv) non_const_object.const_mem_function
  */
#include<iostream>
using namespace std;

class Test
{
private :
    const int roll;
public :
    Test(int i): roll(i){}

   int getRoll()
   {
       return roll;
   }

   int const_getRoll () const
   {
       return roll;
   }


};

int main()
{
     Test t1(1); //Non constant object declaration
    const Test t2(2); //Constant object declaration

  //cout<< t2.getRoll() //const_object.non_constant_mem_function cannot be called;

   cout<<t2.const_getRoll()<<endl;//const_object.const_mem_function

   cout<<t1.getRoll()<<endl;// non_const_object.non_const_mem_function

   cout<<t1.const_getRoll()<<endl;// non_const_object.const_mem_function
   cin.get();
   return 0;
}
