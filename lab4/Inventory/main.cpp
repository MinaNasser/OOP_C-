#include <iostream>
#include "Inventory.h"

using namespace std;

int main()
{

    Inventory item1(101, "Laptop", 50);
    Inventory item2(102, "Mouse", 100);


    cout << "Initial Inventory Details:" << endl;
    item1.print();
    item2.print();
    cout<<"\n\n\n";
    cout << "Total Items Sold: " << Inventory :: getTalItemsSold() << endl << endl;
     cout<<"\n\n\n";
    item1.sellItem(10);
    item2.sellItem(20);
    cout << "Updated Inventory Details:" << endl;
    item1.print();
    item2.print();
     cout<<"\n\n\n";
    cout << "Total Items Sold: " << Inventory::getTalItemsSold() << endl;

    return 0;
}
