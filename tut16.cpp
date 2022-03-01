#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
// This will not swap a and b
// void swap(int a, int b)
// {
//  int temp = a;
//   a = b;
//   b = temp;
// }

// call by reference by pointers
// void swapPointer(int* a, int* b)
// {
//  int temp = *a;
//   *a = *b;
//   *b = temp;
// }


// call by reference using C++ reference variable
// void swapReferenceVar(int &a, int &b)
// {
//  int temp = a;
//   a = b;
//   b = temp;
// }

// call by reference using C++ reference variable
int &swapReferenceVar (int &a, int &b)
{
 int temp = a;
  a = b;
  b = temp;
  return a;
}


int main()
{
    int a=4,b=5;
    // cout<<"the sum of 4 and 5 is"<<sum(a,b);
    cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;
    // swap(&a, &b); //This will not swap 
    // swapPointer(&a, &b); //This will swap a and b using ponter reference
   // swapReferenceVar(a,b) // swapPointer(&a, &b); //This will swap a and b using reference variable
  swapReferenceVar(a,b) = 78;
      cout<<"The value of a is "<<a<<" The value of b is "<<b<<endl;

    return 0;
}