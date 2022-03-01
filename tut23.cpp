#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];      // -->An array is a collection of items stored at contiguous memory locations.
    int itemPrice[100];   // -->The idea is to store multiple items of the same type together.The idea is to store multiple items of the same type together.
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
};
void Shop ::displayPrice(void)
{
   for (int i=0 ; i<counter;i++)
   {
       cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
       
   }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}