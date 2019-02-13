#include<iostream>
#include<cstring>
using namespace std;

class Department
{
private:
    char Name[30];
    int Id;
public:

Department(const char *str, int i)
{
    strcpy(Name, str);
    Id =i;
    cout<<"Object "<<Name<<" with Id : "<<Id<<" is constructed"<<endl;
}
~Department()
{
    cout<<"Object "<<Name<<" with Id : "<<Id<<" goes out of scope "<<endl;
}
};

int main()
{
    Department( "Facebook", 1);
    return 0;
}
