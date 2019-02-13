#include <iostream>
#include <cstring>
using namespace std;

class Student
{
 private:
 protected:
  string name;
  int percent;
 public:
  virtual string getName() = 0;
  virtual int getPercent() = 0;
};
class Engineering : public Student
{
 private:
 public:
  Engineering(string n,int p)
  {
    name= n;
    percent = p;
  }
  string getName()
  {
    return name;
  }
  int getPercent()
  {
    return percent;
  }
};
class Medicine: public Student
{
 private:
 public:
  Medicine(string n,int p){
    name=n;
    percent=p;
  }
  string getName()
  {
    return name;
  }
  int getPercent()
  {
    return percent;
  }
};
class Science : public Student
{
 private:
 public:
  Science(string n, int p){
    name = n;
    percent = p;
  }
  string getName()
  {
    return name;
  }
  int getPercent()
  {
    return percent;
  }
};

int main()
{
  Student* student[3];
  student[0] = new Engineering("Dipak", 87);
  student[1] = new Medicine("VIvek",85);
  student[2] = new Science("Kusal",90);
  cout << "Students enrolled in various fields :\n" ;
  for (int i = 0; i < 3; i++)
  {
    cout << "Name : " << student[i]->getName()<<"\n";
    cout << "Percent : " << student[i]->getPercent()<<"%\n\n" ;
  }
  cin.get();
  return 0;
}
