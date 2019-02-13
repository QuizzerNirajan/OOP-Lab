#include <iostream>
using namespace std;
class String
{
private:
  char *data;
public:
  String(){data = NULL;}
  String(const char* s)
  {
    data = NULL;
    set(s);
  }
  // setters
  void set(const char* s)
  {
    if (data != NULL)
      {
	delete []data;
	data = NULL;
	}
    size_t size = len(s)+1;

    data = new char[size];
    concatenate(data,s);
  }
  // getters
  char* get()
  {
    return data;
  }
  static char *concatenate(char *dest, const char *src)
  {
    char* ptrDest = dest;
    char* ptrSrc = (char *)src;
    do
      {
	*ptrDest = *ptrSrc;
	ptrDest++;
	ptrSrc++;
      }
    while (*ptrSrc != '\0');
    *ptrDest = '\0';
    return dest;
  }
  static size_t len(const char *data)
  {
    char* ptr= (char *)data;
    while (*(ptr) != '\0')ptr++;
    return ptr-data;
  }
  static String *join(String a,String b)
  {
    String *n = new String;
    size_t totalChar= len(a.get())+len(b.get())+1;

    char d[totalChar];
    concatenate(d, a.get());
    concatenate(d+len(d), b.get());
    n->set(d);
    return n;
  }
  void display()
  {
    cout << data;
  }
  ~String()
  {
    if (data != NULL)
      {
	delete []data;
      }
  }
};



int main()
{
  String a("Engineers are"), b(" creators of logic");

  cout << "a is ";
  a.display();
  cout << endl;
  cout << "b is ";
  b.display();
  cout << endl;
  String *c = String::join(a,b);
  cout << "c is ";
  c->display();
  delete c;
  return 0;
}
