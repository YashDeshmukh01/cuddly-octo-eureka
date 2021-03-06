#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}
//Calculate the volume of cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * r);
}
//Calculate the volume of cube
int volume(int a)
{
    return (a * a * a);
}
// Rectangular Box
int volume(int l, int b, int h)
{
    return (l * b * h);
}

int main()
{
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3 , 6 and 9 is " << sum(3, 6, 9) << endl;
    cout << "The volume of cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of cube of side 6 is " << volume(6) << endl;
    cout << "The volume of Rectangular Box is " << volume(4, 6, 3) << endl;
    return 0;
}