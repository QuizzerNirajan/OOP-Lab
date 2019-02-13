#include<iostream>
#include<cstring>
using namespace std;


class String
{
private:
    char *str;

public:
    String(){str = '\0';}
    String (const char* str1)
    {
     int n = len(str1);
     str = new char[n+1];
     for(int i = 0; i<n ; i++)
     {
        str[i] = str1[i];
     }
     str[n] = '\0';
    }

    char* getStr(){return str;}

    String join(String s1 , String s2)
    {
        char* str3;
        int i,j;
        int length = len(s1.getStr()) + len(s2.getStr());
        str3 = new char[length + 1];
        for(i =0 ; i<len(s1.getStr())-1;i++)
        {
            str3[i] = s1.getStr()[i];
        }
        for( j = 0 ; j<len(s2.getStr())-1;j++)
        {
            str3[i+j] = s2.getStr()[j];
        };
        str3[length] = '\0';
        String a(str3);
        return a;

    }


    int len(const char* str2)
    {
        int i = 0;
        while(str2[i] != 0)
        {
            i++;
        }
        return (i+1);
    }
 ~String()
    {
        delete[] str;
    }


};

int main()
{
    String x("Engineers are");
    String y(" creators of logic");
    String c;
    cout<<"x is "<<x.getStr()<<endl;
    cout<<"y is "<<y.getStr()<<endl;
    cout<<"c is "<<c.join(x,y).getStr()<<endl;
    cin.get();
    return 0;
}


