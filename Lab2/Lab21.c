#include<iostream>
using namespacestd;

struct date{
int day, month, year;}date1;
}

void dispalyDate(date1);

int main()
{
    date1.day = 25;
    date1.month = 5;
    date1.year = 2018;

    dispalyDate(date1);
}
void displayDate(date2)
{
    cout<<date2.month<<'/'<<date2.day<<'/'<<date2.year<<endl;
    cin.get();
    return 0;
}
