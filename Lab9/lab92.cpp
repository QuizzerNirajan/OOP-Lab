#include <iostream>
using namespace std;

template <class T>
class Queue
{
 private:
  T data[100];
  int position, k ;
 public:
  Queue()
  {
    position = 0, k = 0;
    for(int i = 0; i< 100; i++)
      data[i]=0;
  }
  void addData(T item)
  {
    data[position] = item;
    position++;

  }
  T getData()
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
};
int main()
{
  Queue<int> listInteger;
  listInteger.addData(3);
  listInteger.addData(4);
   listInteger.getData();
   listInteger.getData();
  Queue<char> listChar;
  listChar.addData('c');
  listChar.addData('d');
  listChar.getData();
  listChar.getData();


  return 0;
}
