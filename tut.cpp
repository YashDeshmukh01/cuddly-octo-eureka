#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
};              //union

int main()
{ 
//     struct employee harry;
// harry.eId =1;
// harry.favChar ='c';
// harry.salary=120000000;

// cout<<"The value is "<<harry.eId<<endl;
// cout<<"The value is "<<harry.favChar<<endl;
// cout<<"the value is "<<harry.salary<<endl;
enum meal{breakfast,lunch,dinner};
meal m1=lunch;
meal m3=dinner;
cout<<m3<<endl;
cout<<m1<<endl;

    return 0;
}