#include <iostream>
#include <typeinfo>
#define MAX  2
using namespace std;

template <class T>
class Queue
{
 private:
  T data[MAX];
  int position, k ;
 public:
  Queue()
  {
    position = 0, k = 0;
    for(int i = 0; i< MAX; i++)
      data[i]=0;
  }

  class Exception{}; //abstract class for exception
  void addData(T item)
  {
      try{
          if(position <= MAX - 1)
          {
          data[position] = item;
          position++;
      }
      else
      {
          throw Exception();
      }
      }
      catch(Exception)
      {
          cout<<"The stack is full"<<endl;
      }
}
  T getData()
  {
      try{
          if(position>0)
          {
    T  item = data[0];
    for(int i = 0 ; i < position; i++)
    {
      data[i] = data[i+1];

    }
    position--;
    k++;
    cout<<"Item "<<k<<" added : "<<item<<endl;
  }
  else
    {
        throw Exception();

  }
      }
  catch(Exception)
  {

    cout<<"The stack is empty"<<endl;
  }
  }

};
int main()
{
  Queue<int> listInteger;
  listInteger.addData(3);
  listInteger.addData(4);
  listInteger.addData(5);
   listInteger.getData();
   listInteger.getData();
   listInteger.getData();
  Queue<char> listChar;
 listChar.addData('c');
  listChar.addData('d');
  listChar.getData();
  listChar.getData();
  listChar.getData();


  return 0;
}

