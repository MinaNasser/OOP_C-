#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED
#include <iostream>
using namespace std;
struct Inventory
{
    private:
    int itemID;
    string itemName;
    int quantityOnHand;
    static int talItemsSold;
    public:
    Inventory();
    Inventory(int,string,int);
    void setItemID(int);
    void setItemName(string);
    void setQuantityOnHand(int);
    void setTalItemsSold(int);
    int getItemID();
    string getItemName();

    static int getTalItemsSold();
    static void updateTalItemsSold(int);

    void print();

    void sellItem(int quantity);
    ~Inventory();



};



#endif // INVENTORY_H_INCLUDED
