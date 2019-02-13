/*Create a class with a data member to hold "serial number" for each object created from the class.
That is, the first object created will be numbered 1, the second 2 and so on by using the basic concept of static data members.
Use static member function if it is useful in any of the member functions declared in the program.
Otherwise make separate program that demonstrate the use of static member function.
*/

#include <iostream>
using namespace std;
class Serial
{
    int serial_no;
    static int count;

public:
    void setSerialNo()
    {
        serial_no = ++count;
    }
    void showSerialNo()
    {
        cout << "object number :" << serial_no << "\n";
    }
    static void showCount()
    {
        cout << "count:" << count << endl;
    }
};
int Serial::count = 0;
int main()
{
    Serial s1, s2;
    s1.setSerialNo();
    s2.setSerialNo();

    Serial::showCount();

    Serial s3;
    s3.setSerialNo();

    Serial::showCount();
    s1.showSerialNo();
    s2.showSerialNo();
    s3.showSerialNo();
    cin.get();
    return 0;
}
