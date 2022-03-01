#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //count =1000 not permitible here

public:
    void setData(void) //public members
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void) //public members
    {
        cout << "The id of this employee is " << id << " and this is  employee number " << count << endl;
    }
    static void getCount(void)
    { //public members
        cout << "The value of count is " << count << endl;
    }
};
//Count is the static data member of class Employee
int Employee ::count; // count=1000; //Default value is 0
int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; //cannot do this as id and count are private
    harry.setData();
    harry.getData();
    harry.getCount();

    rohan.setData();
    rohan.getData();
    rohan.getCount();

    lovish.setData();
    lovish.getData();
    lovish.getCount();
    return 0;
}