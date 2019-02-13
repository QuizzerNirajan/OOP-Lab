#include<iostream>
using namespace std;

typedef struct{
int day, month, year;
}date;


void displayDate(date);

int main()
{
    date date1;
    date1.day = 25;
    date1.month = 5;
    date1.year = 2018;

    displayDate(date1);
     cin.get();
    return 0;
}
void displayDate(date date2)
{
    cout<<date2.month<<'/'<<date2.day<<'/'<<date2.year<<endl;


}
