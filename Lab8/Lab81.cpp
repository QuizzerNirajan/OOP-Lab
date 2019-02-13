#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  ofstream bill("bill.txt",ios::out);
  bill << setw(40) << "BCT074 Departmental Store" << endl;
  cout << setw(40) << "BCT074 Departmental Store" << endl;
  int symbolNo = 1;
  char part[20];
  int quantity;
  float price;
  float subTotal;
  float total = 0;
  char choice;
  bill << setw(4) << "Sno " << setw(20) << left << "Particulars "<< setw(10) << "Quantity " << setw(6) << "Price "<< setw(10) <<"Sub total " << endl;
  do{
    cout << "Particulars:" ;
    cin >> part;
    cout << "Quantity:";
    cin >> quantity;
    cout << "Price:";
    cin >> price;
    cout << "Sub Total:";
    subTotal = quantity * price;
    cout << subTotal << endl;
    total += subTotal;
    bill << setw(4) << symbolNo++ << setw(20) << left << part << setw(10)  << quantity << setw(6) << price << setw(10) << subTotal << endl;
    cout << "Do you want to enter again (y/n)";
    cin >> choice;
  }
  while(choice == 'y');
  cout << "Total : " << total;
  bill << setw(34) << "total" << setw(10) << total << endl;
  bill.close();
  return 0;
}
