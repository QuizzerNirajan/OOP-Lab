#include<iostream>
using namespace std;



template <class T>
T Sum(T *a, int length)
{
    T sum = 0;
for(int i = 0; i < length ; i++)
{
sum = sum + a[i];
}
return sum;

}



int main()
{
   int a[4] = {5, 7, 9, 11};
   float b[5] = {1.1, 2.4, 5.6, 9.9, 7.8};
   cout<<"The sum of elements of a is "<<Sum(a, 4)<<endl;
   cout<<"The sum of elements of b is "<<Sum(b, 5);
   return 0;



}
