#include<iostream>
using namespace std;

class  Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int h, int m, int s)
    {
        if(h <24)
            hour = h;
        else
        {
            cout<<"There can only be 24 hours in a day"<<endl;
        }
        if(m<60)
            minute = m;
        else
        {
            cout<<"There can only be 60 minutes in an hour"<<endl;
        }
        if(s<60)
            second = s;
        else
        {
            cout<<"There can only be 60 seconds in a minute"<<endl;
        }
    }

    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }


    Time addTime(Time t1, Time t2)
    {
        Time result;
        result.hour = t1.getHour() + t2.getHour();
        result.minute = t1.getMinute() + t2.getMinute();
        result.second = t1.getSecond() + t2.getSecond();

        if(result.second>=60)
        {
            result.minute  += result.second/60;
            result.second %= 60;

        }
        if (result.minute >=60)
        {
            result.hour += result.minute/60;
            result.minute %= 60;
        }

        if (result.hour >=24)
        {
            result.hour %= 24;
        }
        return result;

    }

    void showTime()
    {
        cout<<"("<<hour<<"/"<<minute<<"/"<<second<<")";
    }
};

int main()
{
    int hour, minu, sec;
    char temp;
    cout << "Enter the time in format : hour/min/sec? ";
    cin >> hour >>temp  >> minu>> temp >> sec;
    Time tt1(hour,minu,sec);
    cout << "Enter the time in format : hour/min/sec? ";
    cin >> hour >>temp  >> minu>> temp >> sec;
    Time tt2(hour,minu,sec);
    Time tt3;
    tt1.showTime();
    cout<<"+";
    tt2.showTime();
    cout<<"=";
    tt3.addTime(tt1, tt2).showTime();
    cin.get();
    return 0;
}
