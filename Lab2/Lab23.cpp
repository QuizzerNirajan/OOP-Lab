#include<iostream>
using namespace std;

namespace square
{
    int num;
    int fun(int num){
    return num*num;
    }
}

namespace cube{
int num;
int fun(int num){
return num*num*num;
}
}

int main(){
square::num = 5;
cube::num = 7;

cout<<"The cube of "<<square::num<<" = "<<cube::fun(square::num)<<endl;
cout<<"The square of "<<cube::num<<" = "<<square::fun(cube::num)<<endl;
cin.get();
return 0;
}


